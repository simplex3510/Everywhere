using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GenderSwipe : MonoBehaviour
{
    public Image rTestImage;
    public Sprite rTestSprite;
    public Image lTestImage;
    public Sprite lTestSprite;
    public TextMeshProUGUI RChangetext;
    public TextMeshProUGUI LChangetext;

    public void rChangeImage()
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
    }

    public void RChangeText()
    {
        RChangetext.text = "¿©";
    }

    public void LChangeText()
    {
        LChangetext.text = "³²";
    }
}
