#pragma once

class Calculator
{
private:
	int c_add, c_min, c_mul, c_div;
public:
	void Init();
	void Show();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
};