using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sphere : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void scale_down()
    {
        this.transform.localScale = new Vector3(-3.0f, -3.0f, -3.0f);
    }
    
}
