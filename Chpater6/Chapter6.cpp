#include <iostream>
#include <typeinfo>

using namespace std;
/* ======================== */
/* static ��뿹 */
/* ======================== */
/*
class SoSimple
{
public:
	static int SimobjCnt;

public:
	SoSimple()
	{
		SimobjCnt++;
		cout << SimobjCnt << "��° SoSimple ��ü" << endl;
	}


};
int SoSimple::SimobjCnt = 0;

class SoComplex
{
private:
	static int CmxobjCnt;

public:
	SoComplex()
	{
		CmxobjCnt++;
		cout << CmxobjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		CmxobjCnt++;
		cout << CmxobjCnt << "��° SoComplex ��ü" << endl;
	}
	
};
int SoComplex::CmxobjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;
	cout << "���� SimobjCnt : " << SoSimple::SimobjCnt << endl;
	cout << "���� SimobjCnt : " << sim1.SimobjCnt << endl << endl;	// sim1�� ���ؼ� static������� ���� ����(public)

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();

	return 0;
}
*/

class A
{
public:
	const static int a = 5;
	// const int b ; (const ��������� �̴ϼȶ������� �ʱ�ȭ �ؾ���)
public:
	A(){ cout << a << endl; }
	// A() : a(1) {}; (const ������� �ʱ�ȭ)
};

int main(void)
{
	cout <<"const static int a = "<< A::a << endl;	// ��ü���� �ʿ���� Ŭ������ �̸����� ���� ���� (public �ʿ�)
	return 0;
}