using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Stat", menuName = "ScriptableObject/Stat")]
public class Stat : ScriptableObject
{
    public int sociability;
    public int learningAbility;
    public int economicAbility;
    public int specAbility;
}
