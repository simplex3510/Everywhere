using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EveryWhere.Base;

namespace EveryWhere.Manger
{
    public class ScheduleManager : SingletonMonoBase<ScheduleManager>
    {
        public static readonly int MAX_WEEK_DAYS = 7;
        public static readonly int MAX_DAY_TIMES = 24;

        private static TimelineCell[,] timeline;

        private static readonly int MINIMUM_WEEK_SLEEP_TIMES = 42;
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

        // 최소 주간 수면 시간 설정
        // 각 행동(일정)마다 피로도 분배 및 설정
        // 일정 할당 및 해제 구현

        #endregion
    }
}