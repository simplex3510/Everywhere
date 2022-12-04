using UnityEngine;
using EveryWhere.Manger;

public class Title : MonoBehaviour
{
    public void LoadScene(string otherScene)
    {
        LoadManager.LoadScene(otherScene);
    }
}
