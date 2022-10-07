#include <iostream>

class Point;

namespace mystd
{
	using namespace std;

	class ostream
	{
	public:
		ostream& operator<< (const char* str)
		{
			printf("%s", str);
			return *this;
		}
		ostream& operator<< (char str)
		{
			printf("%c", str);
			return *this;
		}
		ostream& operator<< (int num)
		{
			printf("%d", num);
			return *this;
		}
		ostream& operator<< (double e)
		{
			printf("%g", e);
			return *this;
		}
		ostream& operator<< (ostream& (*fp)(ostream& ostm))	// 함수포인터
		{
			return fp(*this) ;
		}

	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout);	// 버퍼비우기
		return ostm;
	}

	ostream cout;	// ostream 클래스 전역 obj
}

class Point
{
private:
	int xpos;
	int ypos;

public:
	Point(int x, int y) : xpos(x), ypos(y){}
	void ShowPos()
	{
		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
	}
	friend mystd::ostream;
};

int main(void)
{
	using mystd::cout;
	using mystd::endl;

	cout << "Simple String";
	cout << endl;
	cout << 3.14;
	cout << endl;
	cout << 123;
	endl(cout);
	/*
	Simple String
	3.14
	123
	*/

	cout << 123 << 5.12 << "abc" << endl << "def" << endl;
	/*
	ostream& 반환형으로 선언
	(((cout<<(123)<<5.12)<<"abc")<<endl)
	*/

	
	return 0;
}