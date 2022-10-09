using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EveryWhere.Manger;
using UnityEngine.UI;

public class ScrollViewTimelineContent : MonoBehaviour
{
    public GameObject timeCell;
    public GameObject dayGrid;

    private List<List<GameObject>> timeline;

    void Awake()
    {
        InitializeTimeline();
        RectTransform rectTransform = GetComponent<RectTransform>();
        Vector2 sizeDelta = rectTransform.sizeDelta;
        sizeDelta.y = transform.GetChild(0).childCount * 149;
        rectTransform.sizeDelta = sizeDelta;
    }

    public void InitializeTimeline()
    {
        timeline = new List<List<GameObject>>();
        for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
        {
            timeline.Add(new List<GameObject>());
            timeline[day].Add(Instantiate(dayGrid));
            timeline[day][0].transform.SetParent(transform);
            for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
            {
                timeline[day].Add(Instantiate(timeCell));
                timeline[day][time].transform.SetParent(timeline[day][0].transform);
            }
        }
    }

    public void UpdateTimeline()
    {
        bool[,] timeline = ScheduleManager.Instance.GetTimeline();
        for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
        {
            for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
            {
                if (timeline[day, time] == true)
                {
                    this.timeline[day][time].GetComponent<Button>().interactable = false;
                }
            }
        }
    }
}
