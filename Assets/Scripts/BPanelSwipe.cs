using System.Collections;
using System.Collections.Generic;
using Unity.Burst.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class BPanelSwipe : MonoBehaviour
{
    public GameObject BoyPanel;
    public Button Boy;
    public GameObject GirlPanel;
    public GameObject Girl;

    void Start()
    {

        BoyPanel.SetActive(false);

        Boy.onClick.AddListener(ShowGPanel);

        GirlPanel.SetActive(true);
        
        }

    void ShowGPanel()
    {
        BoyPanel.SetActive(true);
        GirlPanel.SetActive(false);
    }
}
