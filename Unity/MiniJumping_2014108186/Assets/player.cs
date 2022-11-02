using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class player : MonoBehaviour
{

    public float jump_power = 5;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetButton("Jump"))
        {
            GetComponent<Rigidbody>().velocity = new Vector3(0, jump_power, 0);
        }
    }

    void OnCollisionEnter(Collision other)
    {
        SceneManager.LoadScene("main");
    }
}
