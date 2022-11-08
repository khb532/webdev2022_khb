/*
형변환 연산자 오버로딩
*/

#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number Constructor Called" << endl;
	}
	Number& operator=(const Number& ref)
	{
		cout << "operator=() Called" << endl;
		num = ref.num;
		return *this;
	}
	operator int()		// int 형 변환 오버로딩. 반환형X.
	{
		return num;		// num을 int로 반환
	}
	void ShowData() { cout << num << endl; }
};

int main(void)
{
	Number num1;
	num1 = 30;
	Number num2 = num1 + 10;
	num2.ShowData();

	return 0;
}