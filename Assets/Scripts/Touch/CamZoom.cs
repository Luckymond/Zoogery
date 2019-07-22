using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamZoom : MonoBehaviour
{
    public float ZoomSpeed;
    public Camera cam;
    public float min_zoom;
    public float max_zoom;

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount == 2)
        {
            Touch touch_1 = Input.GetTouch(0);
            Touch touch_2 = Input.GetTouch(1);

            Vector2 touch_1_prev_pos = touch_1.position - touch_1.deltaPosition;
            Vector2 touch_2_prev_pos = touch_2.position - touch_2.deltaPosition;
            float prev_touch_delta_mag = (touch_1_prev_pos - touch_2_prev_pos).magnitude;
            float touch_delta_mag = (touch_1.position - touch_2.position).magnitude;

            float diff = prev_touch_delta_mag - touch_delta_mag;

            cam.fieldOfView += diff * ZoomSpeed;
            cam.fieldOfView = Mathf.Clamp(cam.fieldOfView, min_zoom, max_zoom);
        }
    }
}
