using System.Collections;
using System.Collections.Generic;
using Unity.Burst.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class BackController : MonoBehaviour
{
    public GameObject BackPanel;
    public Button Back;

    void Start()
    {
        BackPanel.SetActive(false);

        Back.onClick.AddListener(ShowBPanel);
    }

    void ShowBPanel()
    {
        BackPanel.SetActive(true);
        Invoke("HideBPanel", 2);
    }

    void HideBPanel()
    {
        BackPanel.SetActive(false);
    }
}
