#include <iostream>
#include "Calculator.h"

using namespace std;


void Calculator::Init()
{
	c_add = 0;
	c_min = 0;
	c_mul = 0;
	c_div = 0;

}
void Calculator::Show()
{
	cout << "���� : " << c_add;
	cout << " ���� : " << c_min;
	cout << " ���� : " << c_mul;
	cout << " ������ : " << c_div << endl;
}
double Calculator::Add(double num1, double num2)
{
	c_add += 1;
	 return num1 + num2;
}

double Calculator::Min(double num1, double num2)
{
	c_min += 1;
	 return num1 - num2;
}
double Calculator::Mul(double num1, double num2)
{
	c_mul += 1;
	 return num1 * num2;
}
double Calculator::Div(double num1, double num2)
{
	c_div += 1;
	 return num1 / num2;
}