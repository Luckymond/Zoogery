using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class TextureDivider : MonoBehaviour
{

    public Texture2D source;
    public int part_size = 128;


    private float scale;
    private Vector2 initial_pos;

    // Use this for initialization
    void Start()
    {
        scale = 1.0F;
        int width = source.width;
        int height = source.height;
        if (width != height)
        {
            throw new Exception("Input image has to be rectangular!");

        }
        else if ((width % part_size) != 0 || (height % part_size) != 0)
        {
            throw new Exception("Image not equally subdividable! " +
                "Please change the part_size to a value dividable by the resolution");
        }
        int x_parts = width / part_size;
        int y_parts = height / part_size;
        float margins = part_size / 100.0f;
        GameObject spritesRoot = GameObject.Find("SpritesRoot");
        Vector3 offset = new Vector3(spritesRoot.transform.position.x, spritesRoot.transform.position.y, spritesRoot.transform.position.z);
        initial_pos = spritesRoot.GetComponent<Rigidbody2D>().position;

        for (int i = 0; i < x_parts; i++)
        {
            for (int j = 0; j < y_parts; j++)
            {
                Sprite newSprite = Sprite.Create(source, new Rect(i * part_size, j * part_size, part_size, part_size), new Vector2(0.5f, 0.5f));
                string id = Convert.ToString(x_parts * i + j);
                string name = String.Concat("Fragment_", id);
                GameObject n = new GameObject(name);
                n.tag = "Fragment";
                BoxCollider2D bc = n.AddComponent(typeof(BoxCollider2D)) as BoxCollider2D;
                SpriteRenderer sr = n.AddComponent<SpriteRenderer>();
                sr.sprite = newSprite;
                n.transform.localScale = new Vector3(scale, scale, 1);
                //Debug.Log(n.transform.localScale);
                n.transform.position = new Vector3(offset.x+i * scale*margins - 1.2f, offset.y+j *scale* margins - 3.47f, offset.z);
                n.transform.parent = spritesRoot.transform;
            }
        }
    }

    void FixedUpdate()
    {
        GameObject spritesRoot = GameObject.Find("SpritesRoot");
        Rigidbody2D rb = spritesRoot.GetComponent<Rigidbody2D>();
        rb.position = initial_pos;
    }
}
