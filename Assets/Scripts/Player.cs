using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class Player
{
    public string Nickname { get; private set; }
    private bool Gender { get; set; }

    public Player(string nickname, bool gender)
    {
        Nickname = nickname;
        Gender = gender;
    }
}
