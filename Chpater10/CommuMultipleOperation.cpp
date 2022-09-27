/*
��ȯ��Ģ ������ ���� �����ε�
�����Լ� ��� �����ε� �̿��ؾ���.

����Լ� ������� �����ε��� ��ü pos�� �ݵ�� ���ʿ� �;���.
pos * 3 �� ������, 3*pos�� �Ұ��� 
���� �����Լ��� operator*(int Num,Point& ref) �������� �����������.
return���� ref*Num�� ������ �ǰ�, Point obj(ref.xpos*times, ref.ypos*times)�� ������ ����
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