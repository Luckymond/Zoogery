using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class createBlocks : MonoBehaviour
{
    public Texture2D imageAsset;

    // Start is called before the first frame update
    void Start()
    {
        int factor = 8;
        Texture2D tex = imageAsset;

        for (int x = 0; x < tex.width; x += factor)
        {
            for(int y = 0; y < tex.height; y += factor)
            {
                for (int z = 0; z < 8; z +=factor)
                {
                    GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
                    // scale verändern 
                    cube.transform.localScale = new Vector3(factor, factor, factor);

                    Color[] curColors = tex.GetPixels(x, y, factor, factor);
                    //mean:
                    float temp = 0f;
                    for (int c = 0; c < factor * factor; c++)
                    {
                        temp += curColors[c].grayscale;
                    }
                    temp /= (factor * factor);
                    Color curColor = new Color(temp, temp, temp);

                    cube.GetComponent<Renderer>().material.color = curColor;
                    cube.transform.position = new Vector3(x-tex.width/2, y-tex.height/2, 100+z);
                }
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
