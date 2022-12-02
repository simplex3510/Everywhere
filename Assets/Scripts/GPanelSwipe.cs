using System.Collections;
using System.Collections.Generic;
using Unity.Burst.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class GPanelSwipe : MonoBehaviour
{
    public GameObject GirlPanel;
    public Button Girl1;
    public Button Girl2;
    public GameObject BoyPanel;
    public GameObject Boy;

    void Start()
    {
        BoyPanel.SetActive(true);
        

        Girl1.onClick.AddListener(ShowGPanel);
        Girl2.onClick.AddListener(ShowGPanel);

        GirlPanel.SetActive(false);
    }

    void ShowGPanel()
    {
        GirlPanel.SetActive(true);
        BoyPanel.SetActive(false);
    }
}
