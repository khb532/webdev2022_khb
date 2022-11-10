#include "PointTemplate.h"
#include <iostream>

using namespace std;

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}

template <typename T>
T Point<T>::SimpleFunc(T& ref)
{
	cout << "[" << xpos << ',' << ypos << "]" << endl;
	return ref;
}