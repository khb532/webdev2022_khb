using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawn : MonoBehaviour
{
    public GameObject pf_wall;
    public float interval;  // ���� ���� ���ݽð�
    // Start is called before the first frame update
    IEnumerator Start()
    {
        // ���� �����Ǵ� ������ 1~2 ���̷� ������ ����
        interval = Random.Range(0.5f, 1.5f);
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
