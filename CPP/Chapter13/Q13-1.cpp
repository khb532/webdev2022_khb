#include <iostream>

using namespace std;



class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	void Showpos()const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	
};

template <typename T>
void Swap(T& n, T& m)
{
	T& tmp = n;
	n = m;
	m = tmp;
}


int main(void)
{
	Point pos(3, 7);
	Point pos2(2, 4);
	Swap(pos, pos2);

	pos.Showpos();

	return 0;
}