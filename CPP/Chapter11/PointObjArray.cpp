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
	//POINT_PTR arr;	// 주소값을 저장하는 방식
	int arrlen;

	BoundCheckPointArray(const BoundCheckPointArray& arr) { }	// BoundCheckPointArray 객체를 받는 생성자
	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr){ }	// BoundCheckPointArray 객체를 대상으로하는 대입연산자

public:
	BoundCheckPointArray(int len) : arrlen(len)
	{
		arr = new Point[len];	// void생성자 호출, line 10 생성자의 디폴트로 0,0 으로 초기화
	}

	// POINT_PTR& operator[](int idx) 
	Point& operator[](int idx)
	{
		if (idx<0 || idx>arrlen)
		{
			cout << "Error : Arraylen" << endl;
			exit(1);
		}
		return arr[idx];
	}
	
	// POINT_PTR operator[](int idx) const
	Point operator[](int idx) const
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

// 주소값을 저장하는 방식은 얕은복사, 깊은복사 를 신경쓰지 않아도 되므로 더 많이 사용되는 방식