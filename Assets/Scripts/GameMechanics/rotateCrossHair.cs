using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class rotateCrossHair : MonoBehaviour
{
    public GameObject anchorObject;
    public float speed = 0.5f;
    public GameObject CrossHair;
    static Vector3 anchor;
    private GameObject spawner;
    // Start is called before the first frame update
    void Start()
    {
        anchor = anchorObject.transform.position;
        spawner = GameObject.Find("Spawner");
    }

    // Update is called once per frame
    void Update()
    {
        float strength = CrossPlatformInputManager.GetAxis("Vertical");
        float z_angle = CrossHair.transform.eulerAngles.z;
        float limit1 = 30.0F;
        float limit2 = 360.0F - limit1;
        
        //Debug.Log(strength);
        if((strength+z_angle <= limit1) || (z_angle+strength >= limit2)) { 
            CrossHair.transform.RotateAround(anchorObject.transform.position, new Vector3(0, 0, 1), speed*strength);
            spawner.transform.eulerAngles = new Vector3(CrossHair.transform.eulerAngles.x, CrossHair.transform.eulerAngles.x, CrossHair.transform.eulerAngles.z);
        }
    }
}
