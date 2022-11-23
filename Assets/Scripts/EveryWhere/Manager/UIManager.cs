using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using EveryWhere.Base;
using TMPro;

namespace EveryWhere.Manger
{
    public class UIManager : SingletonMonoBase<UIManager>
    {
        [Header("<<<Side Menu>>>")]
        public Animator SideMenuAnimator;
        public Button sideMenuButton;

        [Header("<<<Schedule Menu>>>")]
        [SerializeField] private GameObject timeline;           // Content ������ Timeline ��ü Get
        private GameObject[,] timelineUI;

        [Header("<<<StartGame>>>")]
        public Button recentlyClickedButton;

        void Awake()
        {
            InitializeTimeline();
        }

        public void UpdateTimeline()
        {
            for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
            {
                for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
                {
                    if (ScheduleManager.Instance.GetTimelineCell(day, time).isAllocated == true)
                    {
                        TimelineCell timeLineCell = ScheduleManager.Instance.GetTimelineCell(day, time);
                        Button button = timelineUI[day, time].GetComponent<Button>();
                        button.interactable = false;

                        switch (timeLineCell.scheduleType)
                        {
                            case EScheduleType.None:
                                button.GetComponentInChildren<TMP_Text>().text = "";
                                break;
                            case EScheduleType.Lecture:
                                button.GetComponentInChildren<TMP_Text>().text = "����";
                                break;
                            case EScheduleType.Preparation:
                                button.GetComponentInChildren<TMP_Text>().text = "����";
                                break;
                            case EScheduleType.OutdoorActivities:
                                button.GetComponentInChildren<TMP_Text>().text = "���";
                                break;
                            case EScheduleType.PartTimeJob:
                                button.GetComponentInChildren<TMP_Text>().text = "�˹�";
                                break;
                            case EScheduleType.Appointment:
                                button.GetComponentInChildren<TMP_Text>().text = "���";
                                break;
                            case EScheduleType.Rest:
                                button.GetComponentInChildren<TMP_Text>().text = "�޽�";
                                break;
                            case EScheduleType.Sleep:
                                button.GetComponentInChildren<TMP_Text>().text = "����";
                                break;
                        }
                    }
                    else
                    {
                        Button button = timelineUI[day, time].GetComponent<Button>();
                        button.interactable = true;
                        button.GetComponentInChildren<TMP_Text>().text = "";
                    }
                }
            }
        }

        private void InitializeTimeline()
        {
            GameObject dayGrid = null;  // Timeline ������ ������ DayGrid ��ü
            this.timelineUI = new GameObject[ScheduleManager.MAX_WEEK_DAYS, ScheduleManager.MAX_DAY_TIMES + 1];
            for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
            {
                dayGrid = timeline.transform.GetChild(day).gameObject;
                for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
                {
                    this.timelineUI[day, time] = dayGrid.transform.GetChild(time - 1).gameObject;

                    var cell = timelineUI[day, time].GetComponent<SelectTimelineCell>();
                    cell.DayNumber = day;
                    cell.TimeNumber = time;
                }
            }
        }

        public void OnButtonClick()
        {
            if (SideMenuAnimator.GetBool("isOpened") == false)
                SideMenuAnimator.SetBool("isOpened", true);
            else
                SideMenuAnimator.SetBool("isOpened", false);
        }
    }
}
