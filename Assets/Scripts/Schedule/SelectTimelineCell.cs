using EveryWhere.Manger;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class SelectTimelineCell : MonoBehaviour, IPointerClickHandler
{
    public GameObject scheduleSelectWindow;
    public int DayNumber { get; set; }
    public int TimeNumber { get; set; }

    private float clickTime = 0f;
    private bool isSelected = false;

    public void OnPointerClick(PointerEventData eventData)
    {

        if ((Time.time - clickTime) < 0.3f)
        {
            scheduleSelectWindow.SetActive(true);
            StartCoroutine(WaitScheduleSelect());
            Debug.Log("double clicked");
            clickTime = 0.0f;
        }
        else
        {
            clickTime = Time.time;
        }
    }

    private IEnumerator WaitScheduleSelect()
    {
        Toggle[] toggles = ScheduleManager.Instance.scheduleSelectWindow.GetComponentsInChildren<Toggle>();

        while (isSelected == false)
        {
            for (int i = 0; i < (int)EScheduleType.Length - 2; i++) // 열거형 중 None, Length 제외
            {
                if (toggles[i].isOn)
                {
                    ScheduleManager.Instance.GetTimelineCell(DayNumber, TimeNumber).AllocateCell(true, (EScheduleType)(i+1));
                    UIManager.Instance.UpdateTimeline();
                    isSelected = true;
                }
            }
            yield return null;
        }
        isSelected = false;
    }
}
