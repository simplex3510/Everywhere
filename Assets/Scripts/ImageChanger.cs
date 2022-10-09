using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ImageChanger : MonoBehaviour
{
    public Image TestImage;
    public Slider DFriendship;
    public Sprite TestSprite;
    public Slider Friendship;


    // Start is called before the first frame update
    public void ChangeImage()
    {
        TestImage.sprite = TestSprite;
    }
    public void ChangeSlider()
    {
        DFriendship = Friendship;
    }
}
