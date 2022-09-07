#define _CRT_SECURE_NO_WARNINGS
/*
Chapter7~8
*/
#include <iostream>

using namespace std;
/*
class Employee
{
private:
	char name[100];
	
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}

	void ShowYourName(void) const
	{
		cout << "name : "<< name << endl;
	}

	virtual int GetPay(void) const = 0;	// 순수 가상함수 : 객체생성시 오류

	virtual void ShowSalaryInfo(void) const = 0;	// 순수가상함수
};

class PermanentWorker : public Employee
{
	int salary;

public:
	PermanentWorker(const char* name, int money) : Employee(name), salary(money) { }

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl<< endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerhour;

public:
	TemporaryWorker(const char* name, int pph) :Employee(name), workTime(0), payPerhour(pph) { };

	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerhour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}

};

class SalesWorker : public PermanentWorker
{
private :
	int salesResult;
	double bonusRatio;

public:
	SalesWorker(const char* name, int money, double ratio): PermanentWorker(name,money), salesResult(0),bonusRatio(ratio) { }

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary : " << GetPay() << endl; 
	}
};
class EmployeeHandler
{
private:
	Employee * empList[50];
	int empNum;

public:
	EmployeeHandler() :empNum(0) { }

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo()const
	{
		
		for (int i = 0; i < empNum + 1; i++)
			empList[i]->ShowSalaryInfo();
		
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		
		for (int i = 0; i < empNum + 1; i++)
			sum += empList[i]->GetPay();
		
		cout << "Total Salary : " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("Permanent", 1000));
	
	TemporaryWorker* alba = new TemporaryWorker("Temporary", 1000);
	alba->AddWorkTime(4);
	handler.AddEmployee(alba);

	SalesWorker* sale = new SalesWorker("Sales", 2000, 1.2);
	sale->AddSalesResult(2);
	handler.AddEmployee(sale);

	// void AddEmployee(PermanentWorker * ptr)
	// 매개변수에 객체 동적생성을 동시

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	// Employee emp; 순수가상함수를 가진 클래스의 객체생성 불가
	return 0;
}
*/


////////////////////////
/* 가상함수 */
////////////////////////
/*
class First
{
public:
	virtual void MyFunc() { cout << "First Func" << endl; }
};

class Second : public First
{
public:
	virtual void MyFunc() { cout << "Second Func" << endl; }
};

class Third : public Second
{
public:
	virtual void MyFunc() { cout << "Third Func" << endl; }
};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	return 0;
}
*/

////////////
/* 가상 소멸자 */
////////////

class First
{
private:
	char* strone;

public:
	First(const char* str)
	{
		strone = new char[strlen(str) + 1];
	}

	virtual void SimpleFunc(void)
	{
		cout << "First Simple Func called" << endl;
	}
	virtual ~First()	// 가상소멸자, delete 호출시 모든 소멸자 호출, 하위먼저
	{
		cout << "First str out" << endl;
		delete[] strone;
	}

};

class Second : public First
{
private:
	char* strtwo;

public:
	Second(const char* str1, const char* str2) :First(str1)
	{
		strtwo = new char[strlen(str2) + 1];
	}

	virtual void SimpleFunc(void) 
	{
		cout << "Second Simple Func call" << endl;
	}

	~Second()
	{
		cout << "Second str out" << endl;
		delete[] strtwo;
	}
};

int main(void)
{
	First* obj = new Second("first", "second");
	delete obj;

	return 0;
}