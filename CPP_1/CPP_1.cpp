//heloworld.cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string ToParse = "123cba";
	size_t index = 1;
	int value = stoi(ToParse, &index);

	cout << "���:" << value << endl;
	cout << "���� �������� ��ġ:" << ToParse[index] << endl;

	return 0;
}