#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 동전 던지기 함수*/
int RandCoin(void)
{
	srand((unsigned)time(NULL));
	return rand() % 2;	// 1과0 둘중 하나를 무작위로 반환
}

int main(void)
{
	int user = 0, computer = 0;		// user:사용자의 동전, computer:컴퓨터의 동전
	int user_Wins = 0, computer_Wins = 0;
	
	while (1)	// 사용종료까지 무한 반복
	{
		computer = RandCoin();	// 컴퓨터가 동전을 던짐
		printf("앞(0) 또는 뒤(1)를 선택하십시오(종료는-1) :");
		scanf("%d", &user);
		
		if (user != 0 && user != 1)		// 사용자가 1과0이 아닌 다른수를 입력했을때
		{
			if (user == -1)		// -1은 게임종료
			{
				printf("게임이 종료되었습니다. 결과는 사용자 %d승, 컴퓨터 %d승 입니다.\n", user_Wins, computer_Wins);
				break;
			}
			else	// 1,0,-1 이 아닌 수를 입력받았을때
				printf("잘못 입력하셨습니다.\n");
		}

		else if (user == computer)		// 사용자가 컴퓨터의 동전을 맞춤
		{
			printf("사용자가 이겼습니다. 컴퓨터 :%d\n",computer);
			user_Wins++;
		}

		else
		{
			printf("컴퓨터가 이겼습니다. 컴퓨터 : %d\n",computer);
			computer_Wins++;
		}
	}

	return 0;
}