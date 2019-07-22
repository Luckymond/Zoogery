using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveProjectile : MonoBehaviour
{
    public Rigidbody2D projectile;

    public float moveSpeed = 10.0f;
    // Start is called before the first frame update
    void Start()
    {
        projectile = this.gameObject.GetComponent<Rigidbody2D>();
        projectile.velocity = transform.up * moveSpeed;
    }

    // Update is called once per frame
    void Update()
    {
        //y_angle += Input.GetAxis("Vertical") * y_change;
        //y_angle = Mathf.Clamp(y_angle, -1.5f, 1.5f);

    }

    void OnCollisionEnter2D(Collision2D col)
    {
        Collider2D col_child = col.contacts[0].collider;
        if (col_child.gameObject.tag == "Fragment")
        {
            Destroy(col_child.gameObject);
            this.gameObject.SetActive(false);
        }
    }
}
