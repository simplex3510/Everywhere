using System.Collections;
using System.Collections.Generic;
using Unity.Burst.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class VitaController : MonoBehaviour
{
    public GameObject VitaPanel;
    public Button Vita;

    void Start()
    {
        VitaPanel.SetActive(false);

        Vita.onClick.AddListener(ShowVPanel);
    }

    void ShowVPanel()
    {
        VitaPanel.SetActive(true);
        Invoke("HideVPanel", 2);
    }

    void HideVPanel()
    {
        VitaPanel.SetActive(false);
    }
}
