#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0) : xpos(x), ypos(y){}

	void ShowPosition()	const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}	// ����Լ� ��� ���׿�����++ �����ε�

	friend Point& operator--(Point& ref);	// �����Լ� ��� �����ε����� pos�� ��� ������ ���� friend
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}	// �����Լ� ��� ���׿�����++ �����ε�

int main(void)
{
	Point pos(3, 1);
	++pos;
	pos.ShowPosition();
	/*
	[4,2]
	*/

	--pos;
	pos.ShowPosition();
	/*
	[3,1]
	*/
	return 0;
}