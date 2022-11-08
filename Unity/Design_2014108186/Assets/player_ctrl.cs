using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class player_ctrl : MonoBehaviour
{
    private float power;
    public float power_plus = 100.0f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButton(0))
            // Jump Power
            power += power_plus * Time.deltaTime;
        if(Input.GetMouseButtonUp(0))
        {
            this.GetComponent<Rigidbody>().AddForce(new Vector3(power, power, 0));
            power = 0.0f;
        }

        if(this.transform.position.y <-5.0f||Input.GetMouseButton(1))
            // 실패 혹은 마우스 우클릭 입력시 재시작
            SceneManager.LoadScene("main");
    }

    
}
