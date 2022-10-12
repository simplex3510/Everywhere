using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ScheduleBtn : MonoBehaviour
{
    public GameObject UIManager;

    public void Click()
    {
        UIManager.GetComponent<UIManager>().recentlyClickedBtn = gameObject.GetComponent<Button>();
    }

    public void SClick()
    {
        gameObject.GetComponentInChildren<TMPro.TextMeshProUGUI>().text = UIManager.GetComponent<UIManager>().recentlyClickedBtn.GetComponentInChildren<TMPro.TextMeshProUGUI>().text;
    }
    // Start is called before the first frame update
    void Start()
    {
      
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
