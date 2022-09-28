#include <iostream>
#include "Banking_System.h"

using namespace std;



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

void MakeAcc(accArr * parr, int * count)
{
	cout << "====���»���====" << endl;
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> parr[*count].Name;
	cout << "���¹�ȣ�� �Է��ϼ��� : ";
	cin >> parr[*count].acc_CODE;
	parr[*count].balance = 0;
	*count += 1;
	cout << "==�����Ϸ�==" << endl;

}
void Deposit(accArr* parr, int * count)
{
	int accid, money;

	cout << "====�Ա�====" << endl;
	cout << "���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accid;
	cout << "�Ա��� �ݾ��� �Է��ϼ��� : ";
	cin >> money;

	for (int i = 0; i < *count + 1; i++)
	{
		if (parr[i].acc_CODE == accid)
		{
			parr[i].balance += money;
			cout << "�ԱݿϷ�" << endl<<endl;
			return;
		}
	}
	cout << "�ش���¸� ã�� �� �����ϴ�. �ٽ� �Է����ּ���" << endl<<endl;
	Deposit(parr, count); // �Լ� ��ȣ��, ����Ȯ���ʿ�
}


void Withdraw(accArr * parr, int* count)
{
	int accid, money;

	cout << "=====���====" << endl;
	cout << "���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accid;
	cout << "����� �ݾ��� �Է��ϼ��� : ";
	cin >> money;

	for (int i = 0; i < *count + 1; i++)
	{
		if (parr[i].acc_CODE == accid)
		{
			parr[i].balance -= money;
			cout << "��ݿϷ�" << endl<<endl;
			return;
		}
	}
	cout << "�ش���¸� ã�� �� �����ϴ�. �ٽ� �Է����ּ���" << endl<<endl;
	Withdraw(parr,count); // �Լ� ��ȣ��, ����Ȯ���ʿ�
}


void ShowAcc(accArr * parr, int* count)
{
	int accid;

	cout << "====��ȸ====" << endl;
	cout << "���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accid;
	

	for (int i = 0; i < *count + 1; i++)
	{
		if (parr[i].acc_CODE == accid)
		{
			cout << "�̸� : " << parr[i].Name << endl;
			cout << "�ܾ�ȭ�� : "<< parr[i].balance << endl<<endl;
			return;
		}
	}
	cout << "�ش���¸� ã�� �� �����ϴ�. �ٽ� �Է����ּ���" << endl<<endl;
	ShowAcc(parr, count); // �Լ� ��ȣ��, ����Ȯ���ʿ�
}

