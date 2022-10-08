using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using EveryWhere.Base;

namespace EveryWhere.Manger
{
    public class SceneManger : SingletonMonoBase<SceneManger>
    {
        public void SceneChange(string sceneName)
        {
            SceneManager.LoadScene(sceneName);
        }

        // public void
    }
}
