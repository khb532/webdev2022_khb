#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	
	printf("ù��° �� : ");
	scanf_s("%d", &num1);
	printf("�ι�° �� : ");
	scanf_s("%d", &num2);
	
	printf("\n\n");

	printf("===============\n");
	printf("���� : %d\n", num1 + num2);
	printf("���� : %d\n", num1 - num2);
	printf("���� : %d\n", num1 * num2);
	printf("������ �� : %d\n", num1 / num2);
	printf("������ ������: %d\n", num1 % num2);
	printf("===============\n\n");

	return 0;
}