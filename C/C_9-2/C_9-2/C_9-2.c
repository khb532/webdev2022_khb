#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ���� ������ �Լ�*/
int RandCoin(void)
{
	srand((unsigned)time(NULL));
	return rand() % 2;	// 1��0 ���� �ϳ��� �������� ��ȯ
}

int main(void)
{
	int user = 0, computer = 0;		// user:������� ����, computer:��ǻ���� ����
	int user_Wins = 0, computer_Wins = 0;
	
	while (1)	// ���������� ���� �ݺ�
	{
		computer = RandCoin();	// ��ǻ�Ͱ� ������ ����
		printf("��(0) �Ǵ� ��(1)�� �����Ͻʽÿ�(�����-1) :");
		scanf("%d", &user);
		
		if (user != 0 && user != 1)		// ����ڰ� 1��0�� �ƴ� �ٸ����� �Է�������
		{
			if (user == -1)		// -1�� ��������
			{
				printf("������ ����Ǿ����ϴ�. ����� ����� %d��, ��ǻ�� %d�� �Դϴ�.\n", user_Wins, computer_Wins);
				break;
			}
			else	// 1,0,-1 �� �ƴ� ���� �Է¹޾�����
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}

		else if (user == computer)		// ����ڰ� ��ǻ���� ������ ����
		{
			printf("����ڰ� �̰���ϴ�. ��ǻ�� :%d\n",computer);
			user_Wins++;
		}

		else
		{
			printf("��ǻ�Ͱ� �̰���ϴ�. ��ǻ�� : %d\n",computer);
			computer_Wins++;
		}
	}

	return 0;
}