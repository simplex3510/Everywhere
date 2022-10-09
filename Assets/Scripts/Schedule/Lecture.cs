using UnityEngine;

[CreateAssetMenu(fileName = "Lecture", menuName = "ScriptableObject/Lecture")]
public class Lecture : ScriptableObject
{
    protected const int MAX_DAY_TIME = 24;
    protected const int MAX_WEEK_DAY = 7;

    public float tiredness;
    public int timeAmount;

    public bool[] days;
    public bool[] times;
}
