#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

/* Chapter 9 : �����Լ�, ���߻�� */
/////////////
// ���߻��
/////////////
class BaseOne
{
public:
	void SimpleFunc(void)
	{
		cout << "BaseOne SimpleFunc called" << endl;
	}

};

class BaseTwo
{

public:
	void SimpleFunc(void)
	{
		cout << "BaseTwo SimpleFunc called" << endl;
	}
};

class MultiDerived : public BaseOne, protected BaseTwo	// �޸��� ����� Ŭ���� ����
{
public:
	void ComplexFunc(void)
	{
		BaseOne::SimpleFunc();
		BaseTwo::SimpleFunc();
	}
};

int main(void)
{
	MultiDerived obj;
	obj.ComplexFunc();

	return 0;
}

