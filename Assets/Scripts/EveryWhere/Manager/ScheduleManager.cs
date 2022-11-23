using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EveryWhere.Base;

namespace EveryWhere.Manger
{
    public class ScheduleManager : SingletonMonoBase<ScheduleManager>
    {
        public GameObject scheduleSelectWindow;

        public static readonly int MAX_WEEK_DAYS = 7;
        public static readonly int MAX_DAY_TIMES = 24;

        private static TimelineCell[,] timeline;

        private readonly int MINIMUM_WEEK_SLEEP_TIMES = 42; // �ּ� �ְ� ���� �ð�
        private readonly int MAX_CREDIT = 21;               // �ִ� ����
        private readonly int MIN_CREDIT = 12;               // �ּ� ����
        private int currentCredit = 0;
        private float tiredness = 100.0f;

        void Awake()
        {
            timeline = new TimelineCell[MAX_WEEK_DAYS, MAX_DAY_TIMES + 1];
            InitializeTimeline();
        }

        #region Lecture
        public TimelineCell[,] GetTimeline()
        {
            return timeline;
        }

        public TimelineCell GetTimelineCell(int day, int time)
        {
            return timeline[day, time];
        }

        public void AddTimeline(Lecture lecture)
        {
            for (int day = 0; day < MAX_WEEK_DAYS; day++)
            {
                if (lecture.days[day] == true)
                {
                    for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
                    {
                        if (lecture.times[time] == true && timeline[day, time].isAllocated == false)
                        {
                            timeline[day, time].AllocateCell(true, lecture.scheduleType);
                        }
                        else if (lecture.times[time] == true && timeline[day, time].isAllocated == true)
                        {
                            timeline[day, time].DeallocateCell();
                        }
                    }
                }
            }

            currentCredit += 3;
        }

        public void DeleteTimeline(Lecture lecture)
        {
            for (int day = 0; day < MAX_WEEK_DAYS; day++)
            {
                if (lecture.days[day] == true)
                {
                    for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
                    {
                        if (lecture.times[time] == true && timeline[day, time].isAllocated == true)
                        {
                            timeline[day, time].DeallocateCell();
                        }
                    }
                }
            }

            currentCredit -= 3;
        }

        private void InitializeTimeline()
        {
            for (int day = 0; day < MAX_WEEK_DAYS; day++)
            {
                for (int time = 1; time < MAX_DAY_TIMES + 1; time++)
                {
                    timeline[day, time] = new TimelineCell();
                }
            }
        }
        #endregion

        #region

        // �ּ� �ְ� ���� �ð� ����
        // �� �ൿ(����)���� �Ƿε� �й� �� ����
        // ���� �Ҵ� �� ���� ����

        #endregion
    }
}