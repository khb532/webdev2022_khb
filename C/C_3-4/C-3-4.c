#include <stdio.h>

int main(void)
{
	int num1, num2, quotient, remainder = 0;

	printf("ù��° �� : ");
	scanf_s("%d", &num1);
	printf("�ι�° �� : ");
	scanf_s("%d", &num2);

	quotient = num1 / num2;
	remainder = num1 % num2;

	printf("�� : %d\n", quotient);
	printf("������ : %d\n", remainder);

	return 0;
}