using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawn : MonoBehaviour
{
    public GameObject pf_wall;
    public float interval;  // 벽의 생성 간격시간
    // Start is called before the first frame update
    IEnumerator Start()
    {
        // 벽이 생성되는 간격을 1~2 사이로 무작위 지정
        interval = Random.Range(1.0f, 2.0f);
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
