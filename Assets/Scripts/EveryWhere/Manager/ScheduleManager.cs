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

        private static bool[,] timeline;

        [SerializeField] private Lecture lecture_A;


        void Awake()
        {
            timeline = new bool[MAX_WEEK_DAYS, MAX_DAY_TIMES + 1];
        }

        public ref bool[,] GetTimeline()
        {
            return ref timeline;
        }

        public void AddTimeline(Lecture lecture)
         {
            for (int day = 0; day < MAX_WEEK_DAYS; day++)
            {
                if (lecture.days[day] == true)
                {
                    for (int time = 0; time < MAX_DAY_TIMES + 1; time++)
                    {
                        // 이미 일정이 있는 셀이라면
                        if (timeline[day, time] == true)
                        {
                            Debug.Log("이미 일정이 있습니다.");
                            return;
                        }

                        if (lecture.times[time] == true)
                        {
                            timeline[day, time] = true;
                        }
                    }
                }
            }
        }
    }
}