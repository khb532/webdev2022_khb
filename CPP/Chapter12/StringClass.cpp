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
	String(const String& s);
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
	cout << "String(const char* s)" << endl;
}

String::String(const String& s)
{
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
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
	if (strcmp(str, s.str))	// 같으면 0, 다르면 1
		return false;
	else
		return true;
	// return strcmp(str, s.str) ? false : true;
}

String String::operator+(const String& s)
{
	char* tmp = new char[len + s.len - 1];
	strcpy(tmp, str);
	strcat(tmp, s.str);
	String tmp_s(tmp);
	delete[] tmp;
	return tmp_s;
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

	

	return 0;
}