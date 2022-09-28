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

	printf("초기금액 : $50\n");
	printf("목표금액 : $250\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d 게임\n", i + 1);
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

		printf("현재금액 : %d\n", cash);
		printf("베팅수 : %d, 승수 : %d, 패수 : %d, 승률 : %.3f%%\n\n", bets, wins, loses, (double)wins / (double)bets * 100.0);
		REGAME();
	}
	return 0;
}
