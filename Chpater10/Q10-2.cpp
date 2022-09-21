#include <iostream>

using namespace std;

/*
Chapter10
Q. 10-2 

1)부호연산자 - 를 멤버함수로 오버로딩
2)연산자 ~ 를 전역함수 기반 오버로딩
*/

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x, int y) : xpos(x), ypos(y) {}

	void Show()
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	Point operator-(void)
	{
		Point pos(-xpos, -ypos);
		return pos;
	}

	friend Point operator~(const Point& ref);
};

Point operator~(const Point& ref)
{
	Point pos(ref.ypos, ref.xpos);
	return pos;
}

int main(void)
{
	cout << "operator -" << endl;
	Point obj(1,2);
	Point obj2 = -obj;	// object 복사생성자, 우항에 객체?

	obj2.Show();

	cout << endl << "operator ~" << endl;

	Point obj3 = ~obj;
	obj3.Show();
	(~obj3).Show();
	obj3.Show();

	return 0;
}