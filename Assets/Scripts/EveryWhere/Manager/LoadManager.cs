using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using EveryWhere.Base;
using Unity.VisualScripting;

namespace EveryWhere.Manger
{
    public class LoadManager : SingletonMonoBase<LoadManager>
    {
        public static string nextScene;
        [SerializeField] Image sliderBar;

        private void Start()
        {
            StartCoroutine(CLoadScene());
        }

        public static void LoadScene(string otherScene)
        {
            nextScene = otherScene;
            SceneManager.LoadScene("LoadingScene");
        }

        public static void InvLoadScene(string otherScene)
        {
            nextScene = otherScene;
            SceneManager.LoadScene("InventoryScene");
        }

        public static void CSVLoadScene(string otherScene)
        {
            nextScene = otherScene;
            SceneManager.LoadScene("CSVScene");
        }

        public static void ScheduleLoadScene(string otherScene)
        {
            nextScene = otherScene;
            SceneManager.LoadScene("ScheduleScene");
        }

        IEnumerator CLoadScene()
        {
            yield return null;

            AsyncOperation op = SceneManager.LoadSceneAsync(nextScene);
            op.allowSceneActivation = false;

            float timer = 0.0f;
            while (op.isDone == false)
            { 
                if (op.progress < 0.9f)
                {
                    sliderBar.fillAmount = op.progress;
                }
                else
                {
                    timer += Time.deltaTime;
                    sliderBar.fillAmount = Mathf.Lerp(sliderBar.fillAmount, 1f, timer);
                    if (1.0f <= sliderBar.fillAmount)
                    {
                        op.allowSceneActivation = true;
                        yield break;
                    }
                }

                yield return null;
            }
        }

    }
}
