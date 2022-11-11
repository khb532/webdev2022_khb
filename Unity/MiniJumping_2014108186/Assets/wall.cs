using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wall : MonoBehaviour
{
    private float height;   // 벽의 높이
    private float speed;    // 벽의 이동 속도

    // Start is called before the first frame update
    void Start()
    {
        // 높이를 -3 ~ +4 사이, 속도를 -6 ~ -4 사이 무작위 지정
        height = Random.Range(-3.0f, 4.0f);
        speed = Random.Range(-6.0f, -4.0f);

        // 벽은 5개, 생성 위치는 무작위 높이
        transform.position = new Vector3(transform.position.x, height, 0);
        Destroy(gameObject, 5.0f);
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speed*Time.deltaTime, 0, 0);
    }
}
