
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class player : MonoBehaviour
{

    //private float jump_power = Random.Range(4, 9);
    private float jump_power;   // 점프력
    private float time;         // 경과시간
    // Start is called before the first frame update
    void Start()
    {
        // 매 판마다 점프력이 4~9 사이 수치로 지정
        jump_power = Random.Range(4.0f, 9.0f);
    }

    // Update is called once per frame
    void Update()
    {
        // 경과시간 = deltaTime을 매 프레임 더하기
        time += Time.deltaTime;

        if(Input.GetButton("Jump"))
        {
            GetComponent<Rigidbody>().velocity = new Vector3(0, jump_power, 0);
        }
    }

    void OnCollisionEnter(Collision other)
    {
        SceneManager.LoadScene("main");
    }

    void OnGUI()
    {
        // 점프력과 경과시간을 문자열로 형변환
        string jump_power_s = jump_power.ToString();
        string time_s = time.ToString();
        
        // GUI 표시. 상단에 점프력, 하단에 경과시간
        GUI.Label (new Rect(Screen.width/2-30,80,100,40), jump_power_s);
        GUI.Label (new Rect(Screen.width/2-30,160,100,40), time_s);
    }
    
}
