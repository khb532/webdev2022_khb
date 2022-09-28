#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

/* Chapter 9 : �����Լ�, ���߻�� */
/////////////
// ���߻��
/////////////
class Base
{
public:
	virtual void SimpleFunc(void)
	{
		cout << "Base SimpleFunc called" << endl;
	}

};

class MiddleOne : virtual public Base	// Base ������ _ virtual Ű���� �̿�
{

public:
	void MiddleOneFunc(void)
	{
		cout << "Middle One Func called" << endl;
	}
};

class MiddleTwo : virtual public Base	// Multi���� ���߻�ӽ� ��ü���� Base������ �Ѱ��� ����
{
public:
	void MiddleTwoFunc(void)
	{
		cout << "Middle Two Func called" << endl;
	}
};

class MultiDerived : public MiddleOne, public MiddleTwo	// �޸��� ����� Ŭ���� ����
{
public:

	void ComplexFunc(void)
	{
		MiddleOneFunc();
		MiddleTwoFunc();
		SimpleFunc();	// Base�� �������߱� ������ ȣ�� ����
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

