
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class player : MonoBehaviour
{

    //private float jump_power = Random.Range(4, 9);
    private float jump_power = 5.0f;   // 점프력
    private float time;         // 경과시간
    int j_times = 0;
    public float bullet_power = 600.0f;
    public Transform bullet;
    public GameObject barrel;
    // Start is called before the first frame update
    void Start()
    {
        // 매 판마다 점프력이 4~9 사이 수치로 지정
        // jump_power = Random.Range(4.0f, 9.0f);
    }

    // Update is called once per frame
    void Update()
    {
        // 경과시간 = deltaTime을 매 프레임 더하기
        // time += Time.deltaTime;
        
        if(Input.GetButtonDown("Jump"))
        {
            if(j_times == 2)
            {return;}
            GetComponent<Rigidbody>().velocity = new Vector3(0, jump_power, 0);
            j_times += 1;
        }
        
        if(Input.GetButtonDown("Fire1"))
        {
            GameObject spawn_point = GameObject.Find("bullet_spawn");
            Transform prefab_bullet = Instantiate(bullet, spawn_point.transform.position, spawn_point.transform.rotation);
            prefab_bullet.GetComponent<Rigidbody>().AddForce(barrel.transform.right * bullet_power);
        }
    }

    void OnCollisionEnter(Collision other)
    {
        j_times = 0;
    }

    
}
