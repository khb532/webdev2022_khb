using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wall : MonoBehaviour
{
    private float speed = -4.0f;    // ���� �̵� �ӵ�
    private float height;   // ���� ����
    // Start is called before the first frame update
    void Start()
    {
        height = Random.Range(0.5f, 2.0f);
        transform.position = new Vector3(transform.position.x, height, 0);
        Destroy(gameObject, 7.0f);

    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speed*Time.deltaTime, 0, 0);
    }
}
