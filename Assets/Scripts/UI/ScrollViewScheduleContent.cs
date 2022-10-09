using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollViewScheduleContent : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        Vector2 sizeDelta = rectTransform.sizeDelta;
        sizeDelta.y = this.transform.childCount * 150;
        rectTransform.sizeDelta = sizeDelta;
    }
}
