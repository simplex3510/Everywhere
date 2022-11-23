using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class SelectTimelineCell : MonoBehaviour, IPointerClickHandler
{
    public GameObject scheduleSelectWindow;

    private float clickTime = 0f;

    public void OnPointerClick(PointerEventData eventData)
    {

        if ((Time.time - clickTime) < 0.3f)
        {
            scheduleSelectWindow.SetActive(true);
            Debug.Log("double clicked");
            clickTime = 0.0f;
        }
        else
        {
            clickTime = Time.time;
        }
    }
}
