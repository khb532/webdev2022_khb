#include <iostream>

using namespace std;

/*
Chapter10
Q. 10-2 

1)��ȣ������ - �� ����Լ��� �����ε�
2)������ ~ �� �����Լ� ��� �����ε�
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
	Point obj2 = -obj;	// object ���������, ���׿� ��ü?

	obj2.Show();

	cout << endl << "operator ~" << endl;

	Point obj3 = ~obj;
	obj3.Show();
	(~obj3).Show();
	obj3.Show();

	return 0;
}