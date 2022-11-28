#include "ArrayTemplate.h"
#include <iostream>

using namespace std;

template <typename T>
Point<T>::Point(T x, T y) :xpos(x), ypos(y) {};

template <typename T>
void Point<T>::ShowPos()
{
	cout << "[" << xpos << "," << ypos << "]" << endl;
}



template <typename T>
BoundCheckArray<T>::BoundCheckArray(T arr[]) :m_arr(arr) {};

template <typename T>
void BoundCheckArray<T>::ShowArr()
{
	int len = sizeof(m_arr) / sizeof(T);
	for (int i = 0; i < len < i++)
	{
		cout << "[ ";
		cout << m_arr[i] << " ";
	}
	cout << "]" << endl;
}

// 추후 작성