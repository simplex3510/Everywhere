using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class ImageSwipe : MonoBehaviour
{
    public Image rTestImage;
    public Sprite rTestSprite;
    
    public void RChangeImage()
     {
       
            rTestImage.sprite = rTestSprite;
        
     }
     public void lChangeImage()
     {
 
            rTestImage.sprite = rTestSprite;
        
    }

}
