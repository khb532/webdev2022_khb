#include <iostream>
using namespace std;

template <class T1, class T2>		// typename 대신 class 사용
void Show(double num)				// num에 대해 T1, T2별로 형변환
{
	cout << '[' << (T1)num << ", " << (T2)num << ']' << endl;
	// cout << '[' << T1(num) << ", " << T2(num) << ']' << endl;
}

int main(void)
{
	Show<int, double>(1.2);			// <type>이 두개이상일때는 꼭 명시
	Show<char, double>(65.2);

	return 0;
}