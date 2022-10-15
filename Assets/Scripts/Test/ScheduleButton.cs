using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using EveryWhere.Manger;

public class ScheduleButton : MonoBehaviour
{ 
    void Start()
    {
        UIManager.Instance.recentlyClickedButton = GetComponent<Button>();
    }

    public void OnClickButtonSleep()
    { 
        UIManager.Instance.recentlyClickedButton.GetComponentInChildren<TMP_Text>().text = "¼ö¸é";
    }
}
