using UnityEngine;

namespace EveryWhere.Base
{
    public class SingletonMonoBase<T> : MonoBehaviour where T : MonoBehaviour
    {
        private static T instance;

        public static T Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = FindObjectOfType(typeof(T)) as T;

                    if (1 < FindObjectsOfType(typeof(T)).Length)
                    {
                        Debug.LogError("[Singleton] Something went really wrong there should never be more than 1 singleton! Reopening the scene might fix it.");
                        return instance;
                    }

                    if (instance == null)
                    {
                        GameObject singleton = new GameObject();
                        instance = singleton.AddComponent<T>();
                        singleton.name = typeof(T).ToString();   
                    }
                    
                    DontDestroyOnLoad(instance);
                }

                return instance;
            }
        }
    }
}