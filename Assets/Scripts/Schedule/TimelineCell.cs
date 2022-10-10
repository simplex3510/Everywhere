using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimelineCell
{
    public bool isAllocated { get; private set; }
    public EScheduleType scheduleType { get; private set; }
    public float tiredness { get; private set; }

    public TimelineCell()
    {
        isAllocated = false;
        scheduleType = EScheduleType.None;
        tiredness = 0;
    }

    public void AllocateCell(bool isAllocated, EScheduleType scheduleType)
    {
        this.isAllocated = isAllocated;
        this.scheduleType = scheduleType;
        switch (scheduleType)
        {
            case EScheduleType.None:
                tiredness = 0;
                break;
            case EScheduleType.Lecture:
                tiredness = 0;
                break;
            case EScheduleType.Preparation:
                tiredness = 0;
                break;
            case EScheduleType.OutdoorActivities:
                tiredness = 0;
                break;
            case EScheduleType.Appointment:
                tiredness = 0;
                break;
            case EScheduleType.Rest:
                tiredness = 0;
                break;
            case EScheduleType.Sleep:
                tiredness = 0;
                break;
        }
    }

    public void DeallocateCell()
    {
        isAllocated = false;
        scheduleType = EScheduleType.None;
        tiredness = 0;
    }
}
