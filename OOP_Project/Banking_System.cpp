#include <iostream>
#include "Banking_System.h"

using namespace std;



void ShowMenu(void)
{
	cout << "=====메뉴=====" << endl;
	cout << "1.개좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌조회" << endl;
	cout << "5.프로그램 종료" << endl;
	cout << "번호를 입력하세요 :";
}

void MakeAcc(accArr * parr, int * count)
{
	cout << "====계좌생성====" << endl;
	cout << "이름을 입력하세요 : ";
	cin >> parr[*count].Name;
	cout << "계좌번호를 입력하세요 : ";
	cin >> parr[*count].acc_CODE;
	parr[*count].balance = 0;
	*count += 1;
	cout << "==생성완료==" << endl;

}
void Deposit(accArr* parr, int * count)
{
	int accid, money;

	cout << "====입금====" << endl;
	cout << "계좌번호를 입력하세요 : ";
	cin >> accid;
	cout << "입금할 금액을 입력하세요 : ";
	cin >> money;

	for (int i = 0; i < *count + 1; i++)
	{
		if (parr[i].acc_CODE == accid)
		{
			parr[i].balance += money;
			cout << "입금완료" << endl<<endl;
			return;
		}
	}
	cout << "해당계좌를 찾을 수 없습니다. 다시 입력해주세요" << endl<<endl;
	Deposit(parr, count); // 함수 재호출, 버그확인필요
}


void Withdraw(accArr * parr, int* count)
{
	int accid, money;

	cout << "=====출금====" << endl;
	cout << "계좌번호를 입력하세요 : ";
	cin >> accid;
	cout << "출금할 금액을 입력하세요 : ";
	cin >> money;

	for (int i = 0; i < *count + 1; i++)
	{
		if (parr[i].acc_CODE == accid)
		{
			parr[i].balance -= money;
			cout << "출금완료" << endl<<endl;
			return;
		}
	}
	cout << "해당계좌를 찾을 수 없습니다. 다시 입력해주세요" << endl<<endl;
	Withdraw(parr,count); // 함수 재호출, 버그확인필요
}


void ShowAcc(accArr * parr, int* count)
{
	int accid;

	cout << "====조회====" << endl;
	cout << "계좌번호를 입력하세요 : ";
	cin >> accid;
	

	for (int i = 0; i < *count + 1; i++)
	{
		if (parr[i].acc_CODE == accid)
		{
			cout << "이름 : " << parr[i].Name << endl;
			cout << "잔액화인 : "<< parr[i].balance << endl<<endl;
			return;
		}
	}
	cout << "해당계좌를 찾을 수 없습니다. 다시 입력해주세요" << endl<<endl;
	ShowAcc(parr, count); // 함수 재호출, 버그확인필요
}

