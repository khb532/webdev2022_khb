#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void Show()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}

	/*
	Person& operator=(const Person& obj)
	{
		delete[] name;	// ���� name �Ҹ�, �޸𸮴��� ����
		int len = strlen(obj.name)+1;
		name = new char[len];
		strcpy(name, obj.name);
		age=obj.age;
		return *this;
	}
	*/

	~Person()
	{
		delete[] name;
		cout << "Called Destructor" << endl;
	}
};

int main(void)
{
	Person man1("Kyle", 20);
	Person man2("Andy", 30);

	man2 = man1;
	/*
	0xFA "Kyle"
	0xD5 "Andy"
	man2 -> 0xFA �Ǹ鼭 0xD5 "Andy" �޸𸮴���.
	man2�� delete[] name �� 0xFA "Kyle" �Ҹ�, man1�� delete[] name�� �Ҹ��� ����.

	*/
	man1.Show();
	man2.Show();

	return 0;
}