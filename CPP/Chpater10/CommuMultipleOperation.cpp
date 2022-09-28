/*
교환법칙 성립을 위한 오버로딩
전역함수 기반 오버로딩 이용해야함.

멤버함수 기반으로 오버로딩시 객체 pos가 반드시 왼쪽에 와야함.
pos * 3 은 되지만, 3*pos는 불가능 
따라서 전역함수로 operator*(int Num,Point& ref) 형식으로 선언해줘야함.
return으로 ref*Num을 돌려도 되고, Point obj(ref.xpos*times, ref.ypos*times)를 돌려도 가능
*/

#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	Point operator*(int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}
	friend Point operator* (int times, Point& ref);
};

Point operator*(int times, Point& ref)
{
	return ref * times;
}

int main(void)
{
	Point pos1(1, 2);
	(pos1 * 3).ShowPosition();

	cout << "==========" << endl << endl;
	pos1.ShowPosition();
	cout << "==========" << endl << endl;

	Point cpy;
	cpy = 2 * pos1 * 3;
	cpy.ShowPosition();
	pos1.ShowPosition();


	return 0;
}