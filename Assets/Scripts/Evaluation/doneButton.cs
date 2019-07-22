using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class doneButton : MonoBehaviour
{
    public void LoadByIndex(int sceneIndex)
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(sceneIndex);
    }
}
