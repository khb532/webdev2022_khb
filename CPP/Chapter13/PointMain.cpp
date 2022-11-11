#include "PointTemplate.h"
#include "PointTemplate.cpp"
#include <iostream>

using namespace std;

int main(void)
{
	int num1 = 5;
	Point<int> pos1(3, 4);
	pos1.SimpleFunc(num1);

	return 0;
}