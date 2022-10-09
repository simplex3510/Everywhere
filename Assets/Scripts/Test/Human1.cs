using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Human1 : MonoBehaviour
{
    public Slider hpbar;
    public float maxHp;
    public float currentHp;

    void Start()
    {
        hpbar.value = (currentHp / maxHp) * 100;
    }
}
