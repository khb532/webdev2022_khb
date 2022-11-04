#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
	int len;
	char* str;

public:
	String();
	String(const char* s);
	~String();
	String& operator=(const String& s);
	String& operator+=(const String& s);
	bool operator==(const String& s);
	String operator+(const String& s);

	friend ostream& operator<<(ostream& os, const String& s);
	friend istream& operator>>(istream& is, String& s);

};

String::String()
{
	str = NULL;
	len = 0;
	// cout << "Default Constructor" << endl;
}

String::String(const char* s)
{
	len = strlen(s) + 1;
	str = new char[len];
	strcpy(str, s);
	// cout << "String(const char* s)" << endl;
}

String::~String()
{
	delete[] str;
	cout << "String Destructor" << endl;
}

String& String::operator=(const String& s)
{
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+=(const String& s)
{
	
	len = this->len + s.len - 1;
	char* tmp = new char[len];
	strcpy(tmp, str);
	strcat(tmp, s.str);
	if (str != NULL)
		delete[] str;
	str = tmp;
	return *this;
}

bool String::operator==(const String& s)
{
	if (strcmp(str, s.str))
		return true;
	else
		return false;
}

String String::operator+(const String& s)
{
	String tmp(strcat(str, s.str));
	return tmp;
}
ostream& operator<<(ostream& os, const String& s)
{
	os << s.str;
	return os;
}

istream& operator>>(istream& is, String& s)
{
	is >> s.str;
	return is;
}

int main(void)
{	
	String str1("Hello");
	String str2("World");

	cout << str1 <<' '<< str2 << endl;

	return 0;
}