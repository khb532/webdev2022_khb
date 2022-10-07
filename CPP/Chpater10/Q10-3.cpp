#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(){}
	Point(int x, int y):xpos(x),ypos(y){}
	void Show()
	{
		cout << "xpos : " << xpos << endl << "ypos : " << ypos << endl;
	}

	friend istream& operator>>(istream&, Point& obj);
};

istream& operator>>(istream& is, Point& obj)
{
	is >> obj.xpos >> obj.ypos;
	return is;
}

int main(void)
{
	Point pos1;
	cout << "x,y : ";
	cin >> pos1;
	pos1.Show();

	return 0;
}
