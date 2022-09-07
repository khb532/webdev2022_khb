#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

/* Chapter 9 : 가상함수, 다중상속 */
/////////////
// 다중상속
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

class MultiDerived : public BaseOne, protected BaseTwo	// 콤마로 상속할 클래스 구분
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

