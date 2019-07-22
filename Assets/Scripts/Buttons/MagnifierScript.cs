using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MagnifierScript : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    // Start is called before the first frame update

    public Sprite source;
    private bool pressed;
    private GameObject NewObj;
    public GameObject ParentPanel;
    public GameObject Player;
    private float player_x;

    void Start(){
        pressed = false;

        NewObj = new GameObject();
        Image NewImage = NewObj.AddComponent<Image>();
        NewImage.sprite = source;
        Transform x = ParentPanel.transform;

        NewObj.GetComponent<RectTransform>().SetParent(x, false);
        NewObj.GetComponent<RectTransform>().transform.localScale = new Vector3(4.0F, 4.0F, 1.0F);

        NewObj.SetActive(false);

        player_x = Player.transform.position.x;
    }
    
    // Update is called once per frame
    void Update(){
        if (pressed)
        {
            Time.timeScale = 0.0F;
            NewObj.SetActive(true);
            NewObj.GetComponent<RectTransform>().transform.localScale = new Vector3(4.0F, 4.0F, 1.0F);
            Player.transform.position = new Vector3(-100.0f, Player.transform.position.y, Player.transform.position.z);
        }
        else
        {
            Time.timeScale = 1.0F;
            NewObj.SetActive(false);
            Player.transform.position = new Vector3(player_x, Player.transform.position.y, Player.transform.position.z);
        }
    }

    public void freeze()
    {
        Time.timeScale = toggle(Time.timeScale);
    }

    float toggle(float cur)
        {
            if(cur != 0.0)
            {
                return 0.0F;
            }
            else
            {
                return 1.0F;
            }
        }
    public void OnPointerDown(PointerEventData pointerEventData)
    {
        pressed = true;
    }
    public void OnPointerUp(PointerEventData pointerEventData)
    {
        pressed = false;
    }
}
