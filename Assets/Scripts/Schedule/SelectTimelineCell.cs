using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class SelectTimelineCell : MonoBehaviour, IPointerClickHandler
{
    float clickTime = 0f;

    public void OnPointerClick(PointerEventData eventData)
    {
        if ((Time.time - clickTime) < 0.3f)
        {
            Debug.Log("double clicked");
            clickTime = 0.3f;
        }
        else
        {
            clickTime = Time.time;
        }
    }
}
