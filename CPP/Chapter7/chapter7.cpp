#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <typeinfo>

using namespace std;

/* 
===========
Chapter7 상속
===========
*/
/*
class Base
{
private:
	int baseNum;

public:
	Base() :baseNum(99) { cout << "Base() called" << endl; }
	Base(int n) : baseNum(n) { cout << "Base(int n) called"<<endl; }

	void Show(void)
	{
		cout << "Base Num : " << baseNum << endl;
	}
	~Base() { cout << "Base Destructor called" << endl; }
};

class Derived : public Base
{
private:
	int derNum;

public:
	Derived() :derNum(20){ cout << "Derived() called"<<endl; }
	Derived(int n) :derNum(n) { cout << "Derived(int n) called"<<endl; }
	Derived(int n, int m) : derNum(n), Base(m)	// Base(int n) 생성자 직접 명시
	{ cout << "Derived(int n, int m) called" << endl; }

	void Show(void)
	{
		Base::Show();	// 기초클래스의 함수를 호출할때는 클래스이름을 통해서 호출 super,base 키워드 없음 bcs)다중상속지원
		cout << "Derived Num : " << derNum << endl;
	}
	~Derived() { cout << "Derived Destructor called" << endl; }
};
class Derived_Derived : public Derived
{
private:
	int derderNum;
	
public:
	Derived_Derived(int base, int der, int derder) : Derived(base, der), derderNum(derder) {}

	void Show_m(void)
	{
		Derived::Show();
		cout << "Derived_Derived Num : " << derderNum << endl;
	}

	~Derived_Derived() { cout << "Derived_Derived Destructor callled" << endl; }
};
int main(void)
{
	Derived_Derived obj(1, 2, 3);
	obj.Show_m();

	return 0;
}
*/

/*
==============
protected 접근지시자
==============
*/

