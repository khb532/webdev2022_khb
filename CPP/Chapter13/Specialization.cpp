#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	cout << "T Max<T>(T a, T b)" << endl;
	return a > b ? a : b;
}

template<>
char* Max(char* a, char* b)
{
	cout << "char* Max<char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max(const char* a, const char* b)
{
	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) ? a : b;
}

int main(void)
{
	cout << Max(1, 5) << endl;
	char a[] = "Hello";
	char b[] = "bye";
	cout << Max(a, b) << endl;
	cout << Max("A", "D") << endl;
	return 0;

}