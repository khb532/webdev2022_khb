#include <stdio.h>

int main(void)
{
	int i, j, maxIDX, temp;
	int array[5] = { 16,7,9,1,3 };

	for( i = 0; i < 5; i++)
	printf("%d  ", array[i]);   // 첫 배열 출력
	
	printf("\n\n");

	//선택 정렬//

	for (i = 0; i < 4; i++)
	{
		maxIDX = i;

		for (j = i + 1; j < 5; j++)
		{
			if (array[j] < array[maxIDX])
				maxIDX = j;
		}

		temp = array[i];
		array[i] = array[maxIDX];
		array[maxIDX] = temp;
	}

	for (i = 0; i < 5; i++)
		printf("%d  ", array[i]);

	printf("\n\n");

	return 0;
}