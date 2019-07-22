using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class dropdown : MonoBehaviour //, IPointerEnterHandler, IPointerExtiHandler
{
    public RectTransform container;
    public bool isOpen;
    // Start is called before the first frame update
    void Start()
    {
        container = transform.FindChild("Container").GetComponent<RectTransform>();
        isOpen = false;


    }

    // Update is called once per frame
    public void Update()
    {
        Vector3 scale = container.localScale;
        scale.y = Mathf.Lerp(scale.y, isOpen ? 1 : 0, Time.deltaTime * 12);
        container.localScale = scale;
    }

    /*public void OnPointerEnter(PointerEventData eventData)
    {
        isOpen = true;
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        isOpen = false;
    }*/

    public void ToggleOpen()
    {
        isOpen = !isOpen;
    }



}
