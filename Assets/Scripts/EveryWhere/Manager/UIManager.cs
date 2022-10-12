using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using EveryWhere.Base;

namespace EveryWhere.Manger
{
    public class UIManager : SingletonMonoBase<UIManager>
    {
        [Header("<<<Side Menu>>>")]
        public Animator SideMenuAnimator;
        public Button sideMenuButton;

        public void OnButtonClick()
        {
            if (SideMenuAnimator.GetBool("isOpened") == false)
                SideMenuAnimator.SetBool("isOpened", true);
            else
                SideMenuAnimator.SetBool("isOpened", false);
        }
    }
}

public class UIManager : MonoBehaviour
{
    public Button recentlyClickedBtn;
}
