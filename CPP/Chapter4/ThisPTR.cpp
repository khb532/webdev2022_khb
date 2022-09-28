#include <iostream>

using namespace std;
/*
class Thisclass
{
private:
	int num;

public:
	Thisclass(int num)	// 매개변수와 멤버변수의 이름이 같을때, this로 멤버접근
	{
		//	this는 해당객체의 주소를 반환
		this->num = num; // private도 접근가능
	}

	void ShowThisNum()
	{
		cout <<"num = "<< this->num << endl;
	}
};

int main(void)
{
	Thisclass obj(100);

	obj.ShowThisNum();

	return 0;
}
*/


// Self Ref. 객체 자신을 참조할수 있는 참조자를 반환하도록 구성하는식

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) :num(n) { cout << "객체생성완료" << endl; };
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;	// SelfRef& 형 반환식, 리턴문은 포인터+this (*this) = 객체 자신을 반환
	}

	SelfRef& Show()
	{
		cout << num << endl;
		return *this;
	}



};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.Show();
	ref.Show();

	ref.Adder(1)/*참조하고 1더하고*/.Show()/*참조하고 출력하고*/.Adder(2)/*참조하고 2더하고*/.Show()/*참조하고 출력하고*/;	// 반환이 참조형이므로 참조에 참조에 참조 ㄱㄴ

	return 0;
}

/* 즉 참조라는거는
int& ref = num;
변수 num을 참조할수 있는 참조값이 ref에 저장된다.
ref가 변수num을 참조할 수 있게된다.
대입 연산자의 좌항에 &참조연산자가 오거나, 반환형으로 &참조형이 선언된다면 그때 오고 가는 정보는 참조값이다.
*/

