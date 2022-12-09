using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bullet_action : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, 1.0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Obstacle")
        {
        Destroy(other.gameObject);
        Destroy(this.gameObject);
        }
    }
}
