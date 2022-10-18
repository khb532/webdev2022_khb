#include <iostream>

using namespace std;

class First
{
private:
	int num1, num2;
public:
	First(int n1 = 0, int n2 = 0) :num1(n1), num2(n2) {}
	void Show()
	{
		cout << num1 << "," << num2 << endl;
	}

	First& operator=(const First& ref)
	{
		cout << "First& operator=()" << endl;
		num1 = ref.num1;
		num2 = ref.num2;
		return *this;
	}
};

class Second:public First
{
private:
	int num3, num4;
public:
	Second(int n1, int n2, int n3, int n4) :First(n1, n2), num3(n3), num4(n4) {}
	void Show()
	{
		First::Show();
		cout << num3 << "," << num4 << endl;
	}
	
	Second& operator=(const Second& ref)
	{
		cout << "Second& operator=()" << endl;
		// First::operator=(ref); 추가
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
	

};



int main(void)
{
	Second ssrc(111, 222, 333, 444);
	Second scpy(0, 0, 0, 0);
	scpy = ssrc;
	scpy.Show();
	/*
	37행 주석
	First& operator=()
	111,222
	333,444
	*/
	/*
	37행 주석 해제
	Second& oeprator=()
	0, 0
	333, 444
	*/
	// 유도 클래스의 대입 연산자 정의에서, 명시적으로 기초 클래스의 대입 연산자 호출문을 삽입하지 않으면, 
	// 기초 클래스의 대입 연산자는 호출되지 않아서, 기초 클래스의 멤버변수는 멤버 대 멤버 복사의 대상에서 제외된다.
	// 때문에 유도 클래스의 대입 연산자를 정의해야 하는 상황이라면, 기초 클래스의 대입 연산자를 명시적으로 호출해야한다.
	return 0;
}