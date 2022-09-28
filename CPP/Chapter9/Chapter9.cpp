#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

/* Chapter 9 : 가상함수, 다중상속 */
/////////////
// 다중상속
/////////////
class Base
{
public:
	virtual void SimpleFunc(void)
	{
		cout << "Base SimpleFunc called" << endl;
	}

};

class MiddleOne : virtual public Base	// Base 가상상속 _ virtual 키워드 이용
{

public:
	void MiddleOneFunc(void)
	{
		cout << "Middle One Func called" << endl;
	}
};

class MiddleTwo : virtual public Base	// Multi에서 다중상속시 객체내에 Base정보가 한개만 존재
{
public:
	void MiddleTwoFunc(void)
	{
		cout << "Middle Two Func called" << endl;
	}
};

class MultiDerived : public MiddleOne, public MiddleTwo	// 콤마로 상속할 클래스 구분
{
public:

	void ComplexFunc(void)
	{
		MiddleOneFunc();
		MiddleTwoFunc();
		SimpleFunc();	// Base를 가상상속했기 때문에 호출 가능
	}
	
};

int main(void)
{
	MultiDerived obj;
	obj.ComplexFunc();
	/*
	MiddleOne Func called
	MiddleTwo Func called
	Base SimpleFunc called
	*/
	

	return 0;
}

