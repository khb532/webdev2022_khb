using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wall2 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.D))
        {
            GameObject game_object = GameObject.Find("Sphere") as GameObject;
            game_object.GetComponent<sphere>().scale_down();
        }
        if(Input.GetKey(KeyCode.DownArrow))
        {
            this.transform.Translate(Vector3.back*3.0f*Time.deltaTime);
        }
    }
}
