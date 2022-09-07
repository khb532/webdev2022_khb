#include <iostream>

using namespace std;




class SimpleClass
{
private:
	int num;
public:
	SimpleClass(int n)	// 생성자 constructor, <생성자의 이름 = 클래스의 이름>, 반환형 없음, 객체생성시 딱 한번만 호출됨.
	{
		num = n;
	}
	int GetNum()const
	{
		return num;
	}
};

// SimpleClass obj;
// SimpleClass obj(20);  << 객체(값) 형식

// SimpleClass* obj = new SimpleClass;
// SimpleClass* obj = new SimpleClass(20);	<< 동적할당시

class SimpleClass2
{
private :
	int num1;
	int num2;
public :		// 생성자들을 오버로딩할 수 있다.
	SimpleClass2()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass2(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass2(int n, int m)
	{
		num1 = n;
		num2 = m;
	}
};
// SimpleClass sc1;
// SimpleClass sc2(20);
// SimpleClass sc3(20,30);


/*class SimpleClass
{
private:
Point upleft;
Point lowright;

public:
SimpleClass(const int& x1, const int& y1, const int& x2, const int& y2) : upleft(x1,y1), lowright(x2,y2){ }
ㄴ 멤버 이니셜라이저, 생성과정 동시에 멤버 초기화
ㄴ 객체 upleft 생성시 x1, y1 을 인자로 전달 받는 생성자 호출
ㄴ 객체 lowright 생성시 x2, y2 를 인자로 전달 받는 생성자 호출
*/




