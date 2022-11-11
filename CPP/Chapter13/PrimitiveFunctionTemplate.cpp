#include <iostream>
using namespace std;

template <class T1, class T2>		// typename ��� class ���
void Show(double num)				// num�� ���� T1, T2���� ����ȯ
{
	cout << '[' << (T1)num << ", " << (T2)num << ']' << endl;
	// cout << '[' << T1(num) << ", " << T2(num) << ']' << endl;
}

int main(void)
{
	Show<int, double>(1.2);			// <type>�� �ΰ��̻��϶��� �� ���
	Show<char, double>(65.2);

	return 0;
}