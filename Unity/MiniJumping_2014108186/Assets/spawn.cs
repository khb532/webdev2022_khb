using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawn : MonoBehaviour
{
    public GameObject pf_wall;
    public float interval = 1.5f;

    // float rnd = Random.Range(-2.0f,2.0f);

    // Start is called before the first frame update
    IEnumerator Start()
    {
        while(true)
        {
            Instantiate(pf_wall, transform.position, transform.rotation);
            yield return new WaitForSeconds(interval);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
