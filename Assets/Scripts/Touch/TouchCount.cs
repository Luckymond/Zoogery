using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchCount : MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount > 0)
        {
            Debug.Log(Input.touchCount);
        }
        
    }
}
