#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0):xpos(x),ypos(y){}
	friend ostream& operator<<(ostream& os, const Point& pos);

	void* operator new(size_t size)	// new연산자 오버로딩, 반환형은 반드시 void* , 매개변수는 size_t
	{
		cout << "operator new : " << size << endl;
		void* adr = new char[size];
		return adr;
	}
	void operator delete(void* adr)	// delete연산자 오버로딩, 반환형 void, 매개변수 void*
	{
		cout << "operator deletd()" << endl;
		delete[] adr;
	}



};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

int main(void)
{
	Point* ptr = new Point(3, 4);
	cout << *ptr;
	delete ptr;

	return 0;
}