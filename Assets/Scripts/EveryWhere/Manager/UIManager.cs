using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EveryWhere.Base;

namespace EveryWhere.Manger
{
    public class UIManager : SingletonMonoBase<UIManager>
    {
        private bool isSideMenuOpened = false;

        public void OpenSideMenu()
        {
            if (isSideMenuOpened == false)
                isSideMenuOpened = true;
        }

        public void CloseSideMenu()
        {
            if (isSideMenuOpened == true)
                isSideMenuOpened = false;

        }
    }
}
