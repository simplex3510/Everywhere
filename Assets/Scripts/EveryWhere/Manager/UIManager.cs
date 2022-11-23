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

        [Header("<<<StartGame>>>")]
        public Button recentlyClickedButton;

        private GameObject[,] timeline;

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
                        Button button = timeline[day, time].GetComponent<Button>();
                        button.interactable = false;
                        button.GetComponentInChildren<TMP_Text>().text = "강의";
                    }
                    else
                    {
                        Button button = timeline[day, time].GetComponent<Button>();
                        button.interactable = true;
                        button.GetComponentInChildren<TMP_Text>().text = "";
                    }
                }
            }
        }

        private void InitializeTimeline()
        {
            GameObject timeline = transform.GetChild(0).gameObject;     // Content 하위의 Timeline 객체 Get
            GameObject dayGrid = null;                                  // Timeline 하위의 각각의 DayGrid 객체
            this.timeline = new GameObject[ScheduleManager.MAX_WEEK_DAYS, ScheduleManager.MAX_DAY_TIMES + 1];
            for (int day = 0; day < ScheduleManager.MAX_WEEK_DAYS; day++)
            {
                dayGrid = timeline.transform.GetChild(day).gameObject;
                for (int time = 1; time < ScheduleManager.MAX_DAY_TIMES + 1; time++)
                {
                    this.timeline[day, time] = dayGrid.transform.GetChild(time - 1).gameObject;
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
