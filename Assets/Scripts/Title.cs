using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EveryWhere.Manger;
using UnityEngine.SceneManagement;

public class Title : MonoBehaviour
{
    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void LoadScene(string otherScene)
    {
        LoadManager.LoadScene(otherScene);
    }
}
