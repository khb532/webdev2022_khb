#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <typeinfo>

using namespace std;

/* 
===========
Chapter7 ���
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
	Derived(int n, int m) : derNum(n), Base(m)	// Base(int n) ������ ���� ���
	{ cout << "Derived(int n, int m) called" << endl; }

	void Show(void)
	{
		Base::Show();	// ����Ŭ������ �Լ��� ȣ���Ҷ��� Ŭ�����̸��� ���ؼ� ȣ�� super,base Ű���� ���� bcs)���߻������
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
protected ����������
==============
*/

