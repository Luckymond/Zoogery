using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ImageRotation : MonoBehaviour
{
    public float rotationalSpeed;
    public GameObject origin;
    public Rigidbody2D image;
    public GameObject screen;

    // Start is called before the first frame update
    void Start()
    {
        image = this.GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        SpinImage();
    }

    public void SpinImage()
    {
        image.transform.RotateAround(origin.transform.position, new Vector3(0.0f, 0.0f, 1.0f), 1*rotationalSpeed);
        screen.transform.eulerAngles = new Vector3(image.transform.eulerAngles.x, image.transform.eulerAngles.y, image.transform.eulerAngles.z);

    }
}