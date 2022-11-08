using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class player : MonoBehaviour
{

    public 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float jump_power = Random.Range(4.0f, 9.0f);
        if(Input.GetButton("Jump"))
        {
            GetComponent<Rigidbody>().velocity = new Vector3(0, jump_power, 0);
        }
    }

    void OnCollisionEnter(Collision other)
    {
        SceneManager.LoadScene("main");
    }

    /*void OnGUI()
    {
        GUI.Label (new Rect(Screen.width/2-30,80,100,20),jump_power.ToString());
    }*/
}
