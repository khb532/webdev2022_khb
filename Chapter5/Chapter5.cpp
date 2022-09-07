#include<iostream>
#include <typeinfo>

using namespace std;

// # 복사생성자
/*
class AAA
{
public:
	int a;
	char* name;

public:
	AAA(int n, const char*str) :a(n) 
	{
		int len = strlen(str)+1;
		name = new char[len];
		strcpy(name, str);
	}	// 생성자
	AAA(const AAA& copy) : a(copy.a) {}	// 복사생성자+얕은복사
	AAA(const AAA& copy) : a(copy.a)
	{
		name = new char[strlen(copy.name)+1];
		strcpy(name, copy.name);
	}	// 깊은복사
	explicit AAA(const AAA& copy) :a(copy.a) { };	// explict : 묵시적 복사생성자 삽입 불가능, 더이상 대입연산자(=)로 객체생성,복사 불가능

	void Show(void)
	{
		cout << this->a << endl; // this도 포인터
	}

};

int main(void)
{
	AAA obj1(5,"alpha");
	AAA obj2(obj1);		// AAA obj1 = obj2; 에서 자동으로 형변환

	AAA* obj3 = new AAA(1,"beta");
	cout << obj2.a << endl;		// 객체의 멤버는 . 으로 접근, 객체포인터는 -> 로 접근
	cout << obj3->a << endl;
	return 0;
}
*/


class Simple
{
public:
	int m_a1;
	int m_a2;

public:
	Simple(int a1, int a2) :m_a1(a1), m_a2(a2)
	{
		//cout << "Called Simple(a1,a2)" << endl;
	}
	Simple(const Simple& copy) : m_a1(copy.m_a1), m_a2(copy.m_a2)
	{
		cout << "called Simple(copy)" << endl << endl;
	}


	void Show()
	{
		cout << typeid(*this).name() << "'s m_a1 : " << m_a1 << endl;
		cout << typeid(*this).name() << "'s m_a2 : " << m_a2 << endl;
	}

	Simple& Ref_Func(Simple ob)
	{
		cout << "Simple's Ref_Func called" << endl << endl;
		return *this;
	}

};

class Another
{
public:
	int m_a1;
	int m_a2;

public:
	Another(int a1, int a2) : m_a1(a1), m_a2(a2) {};
	Another(const Simple& copy) : m_a1(copy.m_a1), m_a2(copy.m_a2) { cout << "called Another(copy)" << endl; };

	void Show(void)
	{
		cout << typeid(*this).name() << "'s m_a1 : " << m_a1 << endl;
		cout << typeid(*this).name() << "'s m_a2 : " << m_a2 << endl;
	}

	Another Ref_Func(Simple& obj)
	{
		cout << typeid(*this).name() << "'s Ref called" << endl;
		obj.m_a1 += 76;

		return obj;
	}
	~Another()
	{
		cout << "destroyer Another called" << endl;
	}
};

Simple A_Func(Simple ob)
{
	cout << "called A_Func(Simple ob)" << endl;
	return ob;
}



int main(void)
{
	cout << "obj1 생성" << endl;
	Simple obj1(1, 2);
	cout << endl << endl;

	cout << "A_Func 실행" << endl;
	A_Func(obj1).Show();
	cout << endl << endl;

	cout << "obj2 생성" << endl;
	Simple obj2(obj1);
	cout << endl << endl;

	cout << "Another 생성" << endl;
	Another ano_obj1(obj1);
	ano_obj1.Show();
	cout << endl << endl;


	cout << "ref 호출" << endl;
	ano_obj1.Ref_Func(obj1).Show();
	cout << endl << endl;

	cout << "Simple obj1의 멤버" << endl;
	obj1.Show();

	return 0;
}