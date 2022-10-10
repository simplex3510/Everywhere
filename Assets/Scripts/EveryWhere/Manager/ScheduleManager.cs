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

        void Awake()
        {
            timeline = new TimelineCell[MAX_WEEK_DAYS, MAX_DAY_TIMES + 1];
            InitializeTimeline();
        }

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
                        if (lecture.times[time] == true)
                        {
                            timeline[day, time] = new TimelineCell();
                            timeline[day, time].AllocateCell(true, lecture.scheduleType);
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
    }
}