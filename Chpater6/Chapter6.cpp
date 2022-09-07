#include <iostream>
#include <typeinfo>

using namespace std;
/* ======================== */
/* static 사용예 */
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
		cout << SimobjCnt << "번째 SoSimple 객체" << endl;
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
		cout << CmxobjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		CmxobjCnt++;
		cout << CmxobjCnt << "번째 SoComplex 객체" << endl;
	}
	
};
int SoComplex::CmxobjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;
	cout << "현재 SimobjCnt : " << SoSimple::SimobjCnt << endl;
	cout << "현재 SimobjCnt : " << sim1.SimobjCnt << endl << endl;	// sim1을 통해서 static멤버변수 접근 가능(public)

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
	// const int b ; (const 멤버변수는 이니셜라이저로 초기화 해야함)
public:
	A(){ cout << a << endl; }
	// A() : a(1) {}; (const 멤버변수 초기화)
};

int main(void)
{
	cout <<"const static int a = "<< A::a << endl;	// 객체생성 필요없이 클래스의 이름으로 접근 가능 (public 필요)
	return 0;
}