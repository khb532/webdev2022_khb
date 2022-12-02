using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BamsongiCtrl : MonoBehaviour
{
    int shot_log;
    // bool is_shot = false;
    // Start is called before the first frame update
    void Start()
    {
        
    } 

    // Update is called once per frame
    void Update()
    {
        
        /*timer += Time.deltaTime;
        if(timer>0.05 && !is_shot)
        {
        Shoot(new Vector3(0,500,1000));
        is_shot = true;
        }*/
        
        
    }

    public void Shoot(Vector3 dir)
    {
        GetComponent<Rigidbody>().AddForce(dir);
    }

    void OnCollisionEnter(Collision other)
    {
        GetComponent<Rigidbody>().isKinematic = true;
        // iskinematic : 물리력 무효
        GetComponent<ParticleSystem>().Play();
        Vector3 collided_position = transform.position;
        float distance = collided_position.x * collided_position.x + (collided_position.y - 6.5f) * (collided_position.y - 6.5f);
        distance = Mathf.Sqrt(distance);
        Debug.Log(collided_position);
        Debug.Log(distance);
    }
}
