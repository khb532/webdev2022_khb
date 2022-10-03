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
		ostream& operator<< (ostream& (*fp)(ostream& ostm))	// �Լ�������
		{
			return fp(*this) ;
		}

	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout);	// ���ۺ���
		return ostm;
	}

	ostream cout;	// ostream Ŭ���� ���� obj
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
	ostream& ��ȯ������ ����
	(((cout<<(123)<<5.12)<<"abc")<<endl)
	*/

	
	return 0;
}