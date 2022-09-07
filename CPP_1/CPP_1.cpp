//heloworld.cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string ToParse = "123cba";
	size_t index = 1;
	int value = stoi(ToParse, &index);

	cout << "결과:" << value << endl;
	cout << "현재 포인터의 위치:" << ToParse[index] << endl;

	return 0;
}