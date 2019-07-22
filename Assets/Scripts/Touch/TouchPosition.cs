using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchPosition : MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount > 0)
        {
            Debug.Log(Input.GetTouch(0).position);
        }
    }
}
