using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Object_Collision : MonoBehaviour
{

    float speed = 5.0f;
    float power = 500.0f;
    public GameObject ball;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    
    // Update is called once per frame
    void Update()
    {
        float distance_per_frame = speed * Time.deltaTime;
        float vertical_input = Input.GetAxis("Vertical");
        //Vertical : 상/하
        float horizontal_input = Input.GetAxis("Horizontal");
        //Horizontal : 좌/우 -1 ~ +1
        Vector3 launch_direction = new Vector3(0,1,1);

        transform.Translate(Vector3.forward * vertical_input * distance_per_frame);
        transform.Translate(Vector3.right * horizontal_input * distance_per_frame);

        if(Input.GetButtonDown("Fire1"))
            ball.GetComponent<Rigidbody>().AddForce(launch_direction * power);
    }

    void OnCollisionEnter(Collision collided)
    {
        this.GetComponent<AudioSource>().Play();
        Debug.Log(collided.gameObject.name);
    }

}
