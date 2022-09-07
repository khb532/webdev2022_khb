#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;



enum 
{
	CREAT=1,DEPOSIT=2,WITHDRAW=3,INQUIRE=4, EXIT=5
};

void CreatAcc(void);
void ShowMenu(void);

class Account
{
private:
	char* m_name;
	int balance;
	int CODE;

public:
	Account(char* name, int code)
	{
		int len = strlen(name) + 1;
		m_name = new char[len];
		strcpy(m_name, name);
		CODE = code;
		balance = 0;
	}
	int  getCode()
	{
		return CODE;
	}
	void ShowInfo()
	{
		cout << "=============" << endl;
		cout << "�� �̸� : " << m_name << endl;
		cout << "�ܰ� : " << balance << endl;
		cout << "���¹�ȣ : " << CODE << endl;
		cout << "=============" << endl << endl;
	}

	void Deposit(int money)
	{
		balance += money;
		cout << money << "�� �ԱݿϷ�" << endl << endl << endl;
	}

	void Withdraw(int money)
	{
		balance -= money;
		cout << money << "�� ��ݿϷ�" << endl << endl << endl;
	}
	~Account()
	{
		delete[]m_name;
		cout << "Delete Complete Account[" << CODE << "]" << endl;
	}
};

Account* ac_arr[10];
char* tmp_name;
int acc_count = 0;


void CreatAcc(void)
{
	int id;
	char name[10];

	cout << "====���»���====" << endl;
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "���¹�ȣ�� �Է��ϼ��� : ";
	cin >> id;
	
	if (acc_count < 9)
	{
		ac_arr[acc_count] = new Account(name, id);
		acc_count += 1;
		cout << "==�����Ϸ�==" << endl;
	}
	else
	{
		cout << "���̻� ���»��� �Ұ�" << endl;
		return;
	}
}

void ShowMenu(void)
{
	cout << "=====�޴�=====" << endl;
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
	cout << "4.������ȸ" << endl;
	cout << "5.���α׷� ����" << endl;
	cout << "��ȣ�� �Է��ϼ��� :";
}

void Deposit(void)
{
	int code, money;
	cout << "====�Ա�====" << endl;
	cout << "���¹�ȣ�� �Է��ϼ��� : ";
	cin >> code;
	

	for (int i = 0; i < acc_count; i++)
	{
		if (ac_arr[i]->getCode() == code)
		{
			cout << "�Ա��� �ݾ��� �Է��ϼ��� : ";
			cin >> money;
			ac_arr[i]->Deposit(money);
			return;
		}
	}
	cout << "�ش���¸� ã�� �� �����ϴ�. �ٽ� �Է����ּ���" << endl << endl;
	Deposit(); // �Լ� ��ȣ��, ����Ȯ���ʿ�
	
}

void WithDraw(void)
{
	int code;
	int money;

	cout << "���¸� �Է��ϼ���" << endl;
	cin >> code;
	cout << "����� �ݾ��� �Է��ϼ���" << endl;
	cin >> money;

	for (int i = 0; i < acc_count; i++)
	{
		if (ac_arr[i]->getCode() == code)
		{
			ac_arr[i]->Withdraw(money);
			return;
		}
	}
	cout << "ã���� ����" << endl;
	return;
}

void Inquire(void)
{
	int code;
	
	cout << "���¸� �Է��ϼ���" << endl;
	cin >> code;

	for (int i = 0; i < acc_count; i++)
	{
		if (ac_arr[i]->getCode() == code)
		{
			ac_arr[i]->ShowInfo();
			return;
		}
	}
	cout << "ã���� ����" << endl;
	return;
}

int main(void)
{
	int menu;
	while (1)
	{
		ShowMenu();
		cin >> menu;

		switch (menu)
		{
		case CREAT:
		{
			CreatAcc();
			break;
		}
		case DEPOSIT:
		{
			Deposit();
			break;
		}
		case WITHDRAW:
		{
			WithDraw();
			break;
		}
		case INQUIRE:
		{
			Inquire();
			break;
		}
		case EXIT:
		{
			for (int i = 0; i < acc_count; i++)
			{
				delete ac_arr[i];
			}
			return 0;
		}
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
		}

	}

	return 0;

}