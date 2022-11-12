using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class Player
{
    public float Sociability { get; private set; } = 0.0f;
    public float LearningAbility { get; private set; } = 0.0f;
    public float EconomicAbility { get; private set; } = 0.0f;
    public float SpecAbility { get; private set; } = 0.0f;
    public string Nickname { get; private set; } = "NULL";
    private bool Gender { get; set; }

    public Player(string nickname, bool gender, float Sociability, float LearningAbility, float EconomicAbility, float SpecAbility)
    {
        Nickname = nickname;
        Gender = gender;
        this.Sociability = Sociability;
        this.LearningAbility = LearningAbility;
        this.EconomicAbility = EconomicAbility;
        this.SpecAbility = SpecAbility;
    }
}
