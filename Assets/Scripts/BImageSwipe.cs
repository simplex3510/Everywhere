using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BImageSwipe : MonoBehaviour
{
    public Image BTestImage;
    public Sprite GTestSprite;

    public void ChangeImage()
    {
        BTestImage.sprite = GTestSprite;
        BHideSprite();
    }

    void BHideSprite()
    {
        Destroy(BTestImage);
    }
}