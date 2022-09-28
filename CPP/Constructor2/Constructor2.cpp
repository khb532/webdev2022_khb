#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;
/*
class AAA
{
public:
	int num;
	
public:
	AAA() :num(123) {};
	AAA(int n) : num(n) { }; // 생성자 오버로딩

	void Showmem()
	{
		cout << num << endl;
	}
};

int main(void)
{
	AAA* obj = new AAA(); // 동적할당
	cout << obj << endl; // obj의 주소값
	cout << obj->num << endl; // obj의 멤버 num
	obj->Showmem();

	AAA obj2(456); // 고정할당
	cout << obj2.num << endl; // 고정할당은 . 으로 접근
	obj2.Showmem();

	return 0;
}
*/
/*
class AAA
{
private	:
	int num;

public :
	AAA() :num(0) { };
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void Show()const
	{
		cout << num << endl;
	}
private :
	AAA(int n) :num(n) {};

};

int main(void)
{
	AAA obj;
	obj.Show();

	AAA& robj = obj.CreateInitObj(123);
	robj.Show();

	delete& robj; // 참조자로 ptr에 접근할때, delete 하는 양식 ( delete & ref; )

	return 0;
}
*/

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int ages)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = ages;
	}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 :	" << age << endl;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructor" << endl;
	}
};

int main(void)
{
	Person man1("Lee", 14);
	Person man2("Kim", 15);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}