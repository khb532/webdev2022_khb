#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0):xpos(x),ypos(y){ }
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << "[" << pos.xpos << ", " << pos.ypos << "]" << endl;
	return os;
}

typedef Point* POINT_PTR;

class BoundCheckPointArray
{
private:
	Point* arr;
	//POINT_PTR arr;	// �ּҰ��� �����ϴ� ���
	int arrlen;

	BoundCheckPointArray(const BoundCheckPointArray& arr) { }	// BoundCheckPointArray ��ü�� �޴� ������
	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr){ }	// BoundCheckPointArray ��ü�� ��������ϴ� ���Կ�����

public:
	BoundCheckPointArray(int len) : arrlen(len)
	{
		arr = new Point[len];	// void������ ȣ��, line 10 �������� ����Ʈ�� 0,0 ���� �ʱ�ȭ
	}

	// POINT_PTR& operator[](int idx) 
	Point& operator[](int idx)	// const �����ε� - line 50
	{
		if (idx<0 || idx>arrlen)	// �߸��� index
		{
			cout << "Error : Arraylen" << endl;
			exit(1);
		}
		return arr[idx];	// return Point[idx]
	}
	
	// POINT_PTR operator[](int idx) const
	Point operator[](int idx) const	// const �����ε� - line 39
	{
		if (idx<0 || idx>arrlen)
		{
			cout << "Error : Arraylen" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetLen()const { return arrlen; }
	~BoundCheckPointArray() { delete[] arr; }
};

int main(void)
{
	BoundCheckPointArray arr(5);
	arr[0] = Point(1, 2);
	arr[1] = Point(3, 4);
	arr[2] = Point(5, 6);
	/*
	arr[0] = new Point(1,2);
	arr[1] = new Point(3,4);
	*/
	for (int i = 0; i < arr.GetLen(); i++)
	{
		cout << arr[i];	//line 16 : <<overload
		// cout << *(arr[i]);
	}
	/*
	delete arr[0];
	delete arr[1];
	*/

	/*
	[1,2]
	[3,4]
	[5,6]
	[0,0]
	[0,0]
	*/

	return 0;
}

// �ּҰ��� �����ϴ� ����� ��������, �������� �� �Ű澲�� �ʾƵ� �ǹǷ� �� ���� ���Ǵ� ���