#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void REGAME(void)
{
	int cash = 50;
	int bets = 0;
	int wins = 0, loses = 0;
}

int main(void)
{
	int cash = 50;
	int bets = 0;
	int wins=0, loses = 0;

	printf("�ʱ�ݾ� : $50\n");
	printf("��ǥ�ݾ� : $250\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ����\n", i + 1);
		printf("=============\n");
		srand((unsigned)time(NULL));
		while (1)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				cash++;
				wins++;
			}
			else
			{
				cash--;
				loses++;
			}
			if (cash == 250 || cash == 0)
				break;
		}

		printf("����ݾ� : %d\n", cash);
		printf("���ü� : %d, �¼� : %d, �м� : %d, �·� : %.3f%%\n\n", bets, wins, loses, (double)wins / (double)bets * 100.0);
		REGAME();
	}
	return 0;
}
