#include <iostream>

using namespace std;


/*
�Լ� ���ø�
*/

//int Sum(int n, int m)
//{
//	return n + m;
//}

//T Sum(T n, T m)
//{
//	return n + m;
//}

template <typename T>	// T��� �̸��� �̿��Ͽ� �Լ��� ���ø����� ����
						// T ��� �ٸ� ���� ����, typename ��� class ����
						// template <class AAA>
T Sum(T n, T m)
{
	return n + m;
}

// ���� ȣ����
int main (void)
{
	cout << Sum<int>(12, 34) << endl;		// int Sum(int n, int m)
	cout << Sum<float>(3.3f, 4.2f) << endl;	// float Sum(float n, float m)
	cout << Sum(45, 23) << endl;
	cout << Sum(12.3, 45.2) << endl;		// <type> ���� ����, �Ű������� �������� �ڵ�����
	return 0;
}

