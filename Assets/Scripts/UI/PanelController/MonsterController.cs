using System.Collections;
using System.Collections.Generic;
using Unity.Burst.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class MonsterController : MonoBehaviour
{
    public GameObject MonsterPanel;
    public Button Monster;

    void Start()
    {
        MonsterPanel.SetActive(false);

        Monster.onClick.AddListener(ShowMPanel);
    }

    void ShowMPanel()
    {
        MonsterPanel.SetActive(true);
        Invoke("HideMPanel", 2);
    }

    void HideMPanel()
    {
        MonsterPanel.SetActive(false);
    }
}
