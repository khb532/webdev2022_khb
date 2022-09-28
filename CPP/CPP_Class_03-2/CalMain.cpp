#include "Calculator.h"
#include <iostream>

using namespace std;

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 3.4 = " << cal.Add(3.2, 3.4) << endl;
	cout << "4.2 - 1.1 = " << cal.Min(4.2, 1.1) << endl;
	cal.Show();

	return 0;
}