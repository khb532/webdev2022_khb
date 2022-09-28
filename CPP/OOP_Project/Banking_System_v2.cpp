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
		cout << "고객 이름 : " << m_name << endl;
		cout << "잔고 : " << balance << endl;
		cout << "계좌번호 : " << CODE << endl;
		cout << "=============" << endl << endl;
	}

	void Deposit(int money)
	{
		balance += money;
		cout << money << "원 입금완료" << endl << endl << endl;
	}

	void Withdraw(int money)
	{
		balance -= money;
		cout << money << "원 출금완료" << endl << endl << endl;
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

	cout << "====계좌생성====" << endl;
	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "계좌번호를 입력하세요 : ";
	cin >> id;
	
	if (acc_count < 9)
	{
		ac_arr[acc_count] = new Account(name, id);
		acc_count += 1;
		cout << "==생성완료==" << endl;
	}
	else
	{
		cout << "더이상 계좌생성 불가" << endl;
		return;
	}
}

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

void Deposit(void)
{
	int code, money;
	cout << "====입금====" << endl;
	cout << "계좌번호를 입력하세요 : ";
	cin >> code;
	

	for (int i = 0; i < acc_count; i++)
	{
		if (ac_arr[i]->getCode() == code)
		{
			cout << "입금할 금액을 입력하세요 : ";
			cin >> money;
			ac_arr[i]->Deposit(money);
			return;
		}
	}
	cout << "해당계좌를 찾을 수 없습니다. 다시 입력해주세요" << endl << endl;
	Deposit(); // 함수 재호출, 버그확인필요
	
}

void WithDraw(void)
{
	int code;
	int money;

	cout << "계좌를 입력하세요" << endl;
	cin >> code;
	cout << "출금할 금액을 입력하세요" << endl;
	cin >> money;

	for (int i = 0; i < acc_count; i++)
	{
		if (ac_arr[i]->getCode() == code)
		{
			ac_arr[i]->Withdraw(money);
			return;
		}
	}
	cout << "찾을수 없음" << endl;
	return;
}

void Inquire(void)
{
	int code;
	
	cout << "계좌를 입력하세요" << endl;
	cin >> code;

	for (int i = 0; i < acc_count; i++)
	{
		if (ac_arr[i]->getCode() == code)
		{
			ac_arr[i]->ShowInfo();
			return;
		}
	}
	cout << "찾을수 없음" << endl;
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
			cout << "잘못 입력하셨습니다" << endl;
		}

	}

	return 0;

}