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

	const Point operator++(int)			// �Ű����� �ڸ��� int������ ���������� �ǹ�
	{
		
		const Point obj(xpos, ypos);	// ����xpos,ypos ������ ��ü
		xpos+=1;
		ypos+=1;
		return obj;						// �����ص� ��ü�� return �ϰ�, xpos ypos�� 1 ������ ����
		
	}

	friend Point& operator--(Point& ref);	// �����Լ� ��� �����ε����� pos�� ��� ������ ���� friend
	friend const Point operator--(Point& ref, int);
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}	// �����Լ� ��� ���׿�����++ �����ε� , ��������

const Point operator--(Point& ref, int)	// �Ű����� ref�����ڰ� const�� �ƴϱ� ������ (pos--)--; ����
{
	const Point obj(ref.xpos, ref.ypos);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return obj;
}	// �����Լ� ��� ���׿�����-- �����ε�, ��������

int main(void)
{
	Point pos(3, 1);
	pos++;	// (pos++)++; ����, (pos++)�� const�� // (pos++).operator++(int); , operator++(int)�� const �Լ��ƴ�
	pos.ShowPosition();
	/*
	[4,2]
	*/
	Point cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();
	/*
	[4,2]
	[3,1]
	*/
	cout << "======================" << endl << endl;

	--pos;
	pos.ShowPosition();
	/*
	[3,1]
	*/
	return 0;
}