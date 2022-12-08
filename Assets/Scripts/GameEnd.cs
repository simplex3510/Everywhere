using UnityEngine;
using UnityEngine.SceneManagement;

public class GameEnd : MonoBehaviour
{
    public void LoadScene(string otherScene)
    {
        SceneManager.LoadScene(otherScene);
    }
}
