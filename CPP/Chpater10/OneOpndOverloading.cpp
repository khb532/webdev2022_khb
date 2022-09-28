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

	const Point operator++(int)			// 매개변수 자리에 int넣으면 후위증가를 의미
	{
		
		const Point obj(xpos, ypos);	// 현재xpos,ypos 복사한 객체
		xpos+=1;
		ypos+=1;
		return obj;						// 복사해둔 객체를 return 하고, xpos ypos는 1 증가한 상태
		
	}

	friend Point& operator--(Point& ref);	// 전역함수 기반 오버로딩에서 pos의 멤버 접근을 위해 friend
	friend const Point operator--(Point& ref, int);
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}	// 전역함수 기반 단항연산자++ 오버로딩 , 전위감소

const Point operator--(Point& ref, int)	// 매개변수 ref참조자가 const가 아니기 때문에 (pos--)--; 오류
{
	const Point obj(ref.xpos, ref.ypos);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return obj;
}	// 전역함수 기반 단항연산자-- 오버로딩, 후위감소

int main(void)
{
	Point pos(3, 1);
	pos++;	// (pos++)++; 오류, (pos++)가 const형 // (pos++).operator++(int); , operator++(int)는 const 함수아님
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