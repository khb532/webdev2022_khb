#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	int numbers[10] = { 0 };
	int i, count = 0, sum = 0;
	float avg;


	fp = fopen("numbers.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "읽기실패\n");
		exit(1);
	}
	
	for (i=0;i<10;i++)
	{
		fscanf(fp, "%d", &numbers[i]);
		
		if (numbers[i] == 0)
			break;
	}
	count = i;
	while (i != 0)
	{
		sum += numbers[i];
		i--;
	}
	avg = (float)sum / count;

	printf("정수들의 개수 : %d\n", count);
	printf("정수들의 합 : %d\n", sum);
	printf("정수들의 평균 : %.2f\n", avg);



	fclose(fp);

	return 0;
}