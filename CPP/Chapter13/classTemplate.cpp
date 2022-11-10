#include <iostream>
using namespace std;

template<typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) :xpos(x), ypos(y) {}
	void ShowPos()
	{
		cout << "[" << xpos << ',' << ypos << "]" << endl;
	}
	T SimpleFunc(T& ref);	// 외부에 정의
};

template<typename T>		// 멤버함수를 외부에 정의할때, 꼭 template<typename T> 선언
T Point<T>::SimpleFunc(T& ref)
{
	return ref;
}

int main(void)
{
	Point<int> pos1(3, 4);
	Point<float> pos2(3.4, 1.2);
	Point<char> pos3('A', 'B');
	pos1.ShowPos();
	pos2.ShowPos();
	pos3.ShowPos();

	return 0;
}