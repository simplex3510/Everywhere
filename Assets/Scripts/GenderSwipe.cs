using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GenderSwipe : MonoBehaviour
{
    /*public Image rTestImage;
    public Sprite rTestSprite;
    public Image lTestImage;
    public Sprite lTestSprite;*/
    public TextMeshProUGUI RChangetext;
    public TextMeshProUGUI LChangetext; 
    public TextMeshProUGUI RMChangetext;
    public TextMeshProUGUI LMChangetext;
    public TextMeshProUGUI RHChangetext;
    public TextMeshProUGUI LHChangetext;

   /* public void rChangeImage()
    {
        rTestImage.sprite = rTestSprite;
    }
    public void lChangeImage()
    {
        lTestImage.sprite = lTestSprite;
    }
    void Start()
    {
        //Changetext = GetComponent<TextMeshProUGUI>();
    } */

    public void RChangeText()
    {
        RChangetext.text = "여";
    }

    public void LChangeText()
    {
        LChangetext.text = "남";
    }

    public void RMChangeText()
    {
        RMChangetext.text = "유";
    }
        public void LMChangeText()
    {
        LMChangetext.text = "무";
    }
    public void RHChangeText()
    {
        RHChangetext.text = "기숙사";
    }
    public void LHChangeText()
    {
        LHChangetext.text = "통학";
    }
}
