#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(const int x, const int y):xpos(x),ypos(y){}

	void ShowPos(void)
	{
		cout << "[xpos : " << xpos << "]" << endl;
		cout << "[ypos : " << ypos << "]" << endl;
	}
	Point& operator+=(Point& pos2)
	{
		xpos += pos2.xpos;
		ypos += pos2.ypos;
		return *this;
	}

	friend Point operator+(const Point& pos1, const Point& pos2);
	friend Point operator-(const Point& pos1, const Point& pos2);
	friend bool operator==(const Point& ref1, const Point& ref2);
};

Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}
Point operator-(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
	return pos;
}

bool operator==(const Point& ref1, const Point& ref2)
{
	if ((ref1.xpos == ref2.xpos) && (ref1.ypos == ref2.ypos))
		return true;
	else
		return false;
}
bool operator!=(const Point& ref1, const Point& ref2)
{
	if (ref1 == ref2)
		return false;
	else
	{
		return true;
	}
	//return !(ref1==ref2);
}

int main(void)
{
	Point pos1(3, 4);
	Point pos2(5, 6);

	Point pos3 = pos1 + pos2;
	Point pos4 = pos1 - pos2;

	pos3.ShowPos();
	/*
	xpos : 8
	ypos : 10
	*/
	pos4.ShowPos();
	/*
	xpos : -2
	ypos : -2
	*/
	pos3 += pos4;
	pos3.ShowPos();
	bool x = pos1 != pos2;
	cout << "bool x : " << x << endl;

	return 0;
}