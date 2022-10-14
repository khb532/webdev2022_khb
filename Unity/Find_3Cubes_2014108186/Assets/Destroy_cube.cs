using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroy_cube : MonoBehaviour
{

    GameObject game_object = null;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        // 0 : 마우스 왼쪽 버튼
        {
            game_object = GameObject.Find("Cube");
            Destroy(game_object);
        }
        if(Input.GetMouseButtonDown(1))
        // 0 : 마우스 왼쪽 버튼
        {
            game_object = GameObject.Find("Sphere");
            Destroy(game_object);
        }
    }
}
