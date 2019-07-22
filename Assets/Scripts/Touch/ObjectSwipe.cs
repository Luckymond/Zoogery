using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSwipe : MonoBehaviour
{
    public float Force;
    private Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = this.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            float x = touch.deltaPosition.x;
            float y = touch.deltaPosition.y;
            rb.transform.Rotate(-y, -x, 0, Space.World);
        }
    }
}
