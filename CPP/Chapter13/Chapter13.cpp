#include <iostream>

using namespace std;


/*
함수 템플릿
*/

//int Sum(int n, int m)
//{
//	return n + m;
//}

//T Sum(T n, T m)
//{
//	return n + m;
//}

template <typename T>	// T라는 이름을 이용하여 함수를 템플릿으로 정의
						// T 대신 다른 문자 가능, typename 대신 class 가능
						// template <class AAA>
T Sum(T n, T m)
{
	return n + m;
}

// 이후 호출은
int main (void)
{
	cout << Sum<int>(12, 34) << endl;		// int Sum(int n, int m)
	cout << Sum<float>(3.3f, 4.2f) << endl;	// float Sum(float n, float m)
	cout << Sum(45, 23) << endl;
	cout << Sum(12.3, 45.2) << endl;		// <type> 생략 가능, 매개변수를 바탕으로 자동결정
	return 0;
}

