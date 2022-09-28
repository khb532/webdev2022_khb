#include <stdio.h>

int main(void)
{
	int num1, num2, quotient, remainder = 0;

	printf("첫번째 수 : ");
	scanf_s("%d", &num1);
	printf("두번째 수 : ");
	scanf_s("%d", &num2);

	quotient = num1 / num2;
	remainder = num1 % num2;

	printf("몫 : %d\n", quotient);
	printf("나머지 : %d\n", remainder);

	return 0;
}