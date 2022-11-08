using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wall : MonoBehaviour
{
    
    public float speed = Random.Range(-6.0f, -4.0f);
    
    // Start is called before the first frame update
    void Start()
    {
        float height = Random.Range(-3.0f, 4.0f);
        
        transform.position = new Vector3(transform.position.x, height, 0);
        Destroy(gameObject, 5.0f);
    }

    // Update is called once per frame
    void Update()
    {
        
        transform.Translate(speed*Time.deltaTime, 0, 0);
    }
}
