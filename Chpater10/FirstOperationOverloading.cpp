#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

/*
Chapter10 : 연산자 오버로딩

*/

/////////////

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0):xpos(x), ypos(y){}

	void ShowPosition() const
	{
		cout << "xpos : " << xpos << endl << "ypos : " << ypos << endl;
	}
	/*
	Point operator+(const Point& ref)	// 멤버함수를 통한 연산자 오버로딩
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
	*/
	friend Point operator+(const Point& pos1, const Point& pos2);
	// private 멤버 접근을 위해 friend 선언 추가
};

Point operator+(const Point& pos1, const Point& pos2)	// 전역함수를 통한 연산자 오버로딩
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

int main(void)
{
	Point pos1(3, 4);
	Point pos2(5, 6);
	//Point pos3 = pos1.operator+(pos2);
	Point pos3 = pos1+pos2;

	pos3.ShowPosition();
	/*
	xpos : 8
	ypos : 10
	*/
	return 0;
}

