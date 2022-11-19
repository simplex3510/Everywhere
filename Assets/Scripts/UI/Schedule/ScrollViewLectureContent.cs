using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollViewLectureContent : MonoBehaviour
{
    void Awake()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        Vector2 sizeDelta = rectTransform.sizeDelta;
        sizeDelta.y = this.transform.childCount * 150;
        rectTransform.sizeDelta = sizeDelta;
    }
}
