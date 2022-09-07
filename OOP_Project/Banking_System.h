#ifndef __BANKING_SYSTEM_H__
#define __BANKING_SYSTEM_H__

#define LEN 20
#define ALEN 100

typedef struct
{
	int acc_CODE;
	int balance;
	char Name[LEN];
}Account;

typedef Account accArr;



// 메뉴출력
void ShowMenu(void);

// 계좌개설
void MakeAcc(accArr * parr, int * count);

// 입금
void Deposit(accArr * parr, int* count);

// 출금
void Withdraw(accArr * parr, int* count);

// 조회
void ShowAcc(accArr * parr, int* count);

#endif