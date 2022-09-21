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
	}	// 멤버함수 기반 단항연산자++ 오버로딩

	friend Point& operator--(Point& ref);	// 전역함수 기반 오버로딩에서 pos의 멤버 접근을 위해 friend
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}	// 전역함수 기반 단항연산자++ 오버로딩

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