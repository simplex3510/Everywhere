using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using EveryWhere.Base;
using Unity.VisualScripting;

namespace EveryWhere.Manger
{
    public class FlipManager : SingletonMonoBase<LoadManager>
    {
        public static void InvLoadScene(string otherScene)
        {
            SceneManager.LoadScene("InventoryScene");
        }

        public static void StoreLoadScene(string otherScene)
        {
            SceneManager.LoadScene("StoreScene");
        }

        public static void ScheduleLoadScene(string otherScene)
        {
            SceneManager.LoadScene("ScheduleScene");
        }

        public static void MainLoadScene(string otherScene)
        {
            SceneManager.LoadScene("MainGameScene");
        }

        public static void CharacterLoadScene(string otherScene)
        {
            SceneManager.LoadScene("CreateCharacterScene");
        }

        public static void TitleLoadScene(string otherScene)
        {
            SceneManager.LoadScene("TitleScene");
        }
    }
}
