using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleGroupCom : ToggleGroup
{
    protected override void OnEnable()
    {
        var toggle = GetFirstActiveToggle();
        if(toggle != null)
        {
            toggle.isOn = false;
        }
    }

    private Toggle GetFirstToggle()
    {
        if (m_Toggles.Count <= 0)
        {
            return null;
        }
        Toggle toggle = m_Toggles[0];
        for(int i = 1; i < m_Toggles.Count; i++)
        {
            if(toggle.transform.GetSiblingIndex() > m_Toggles[i].transform.GetSiblingIndex())
            {
                toggle = m_Toggles[i];
            }    
        }
        return toggle;
    }

    protected override void OnDisable()
    {
        base.OnDisable();
        for(int i  = 0; i < m_Toggles.Count; i++)
        {
            m_Toggles[i].isOn = false;
        }
    }
}
