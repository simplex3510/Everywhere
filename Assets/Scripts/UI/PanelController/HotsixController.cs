using System.Collections;
using System.Collections.Generic;
using Unity.Burst.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class HotsixController : MonoBehaviour
{
    public GameObject HotsixPanel;
    public Button Hotsix;

    void Start()
    {
        HotsixPanel.SetActive(false);

        Hotsix.onClick.AddListener(ShowHPanel);
    }

    void ShowHPanel()
    {
        HotsixPanel.SetActive(true);
        Invoke("HideHPanel", 2);
    }

    void HideHPanel()
    {
        HotsixPanel.SetActive(false);
    }
}
