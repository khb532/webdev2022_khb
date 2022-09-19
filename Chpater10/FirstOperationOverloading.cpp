#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

/*
Chapter10 : ������ �����ε�

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
	Point operator+(const Point& ref)	// ����Լ��� ���� ������ �����ε�
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
	*/
	friend Point operator+(const Point& pos1, const Point& pos2);
	// private ��� ������ ���� friend ���� �߰�
};

Point operator+(const Point& pos1, const Point& pos2)	// �����Լ��� ���� ������ �����ε�
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

