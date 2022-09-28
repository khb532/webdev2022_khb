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



// �޴����
void ShowMenu(void);

// ���°���
void MakeAcc(accArr * parr, int * count);

// �Ա�
void Deposit(accArr * parr, int* count);

// ���
void Withdraw(accArr * parr, int* count);

// ��ȸ
void ShowAcc(accArr * parr, int* count);

#endif