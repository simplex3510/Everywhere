using UnityEngine;

[CreateAssetMenu(fileName = "Lecture", menuName = "ScriptableObject/Lecture")]
public class Lecture : ScriptableObject
{
    public EScheduleType scheduleType = EScheduleType.Lecture;

    public bool[] days;
    public bool[] times;
}
