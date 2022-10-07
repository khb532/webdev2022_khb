using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class object_transform : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown (KeyCode.A))
        {
            float rnd = Random.Range(-0.2f, 0.2f);  // -0.2~0.2
            this.transform.position += new Vector3 (rnd, rnd, rnd);
            // this = 연결된 object 물체. 생략가능
            // <object>.transform.Translate(이동거리)
        }
        if(Input.GetKeyDown (KeyCode.B))
        {
            float rnd = Random.Range(0.0f, 360.0f); //0.0~360.0
            this.transform.rotation = Quaternion.Euler (rnd, 0.0f, 0.0f);
            // <object>.transform.Rotate(X회전각,Y회전각,Z회전각)
        }
        if(Input.GetKeyDown (KeyCode.C))
        {
            float rnd = Random.Range(0.5f, 1.5f);
            this.transform.localScale = new Vector3 (rnd, rnd, rnd);
            // <object>.transform.localScale = Vector3(sx, sy, sz)
        }
        if(Input.GetKey(KeyCode.UpArrow))
        {
            this.transform.Translate(Vector3.forward * 3.0f * Time.deltaTime);
            // Time.deltaTime : 직전 프레임과 현재 프레임 사이의 소요시간
            // FPS 차이별로 매 프레임 동안 이동거리를 보정
        }
        if(Input.GetKey(KeyCode.R))
        {
            this.transform.Rotate(90.0f*Time.deltaTime, 0.0f, 0.0f);
            // Rotate(x_angle, y_angel, z_angle) : 각 기본축 중심으로 회전할 각도 지정
            // 90.0f * Time.deltaTime : 1초에 90도 회전
        }
    }
}
