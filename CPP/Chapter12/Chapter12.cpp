#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1 = "String";
	string str2 = "Example";
	string str3 = "String Example";
	string str4 = str1 + str2;


	cout << str3 <<endl;
	cout << str4 <<endl;
	cout << "==============" << endl << endl;
	cout << (str1 += str2) << endl;
	cout << str1 << endl;

	/*if (str3 == str4)
		cout << "동일" << endl;
	else
		cout << "불일치" << endl;

	cout << "String 입력 : ";
	cin >> str4;
	cout << str4 << endl;*/

	string str5("str5");
	cout << str5 << endl;

	return 0;
}