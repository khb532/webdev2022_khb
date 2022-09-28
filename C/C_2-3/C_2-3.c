#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	
	printf("Ã¹¹øÂ° ¼ö : ");
	scanf_s("%d", &num1);
	printf("µÎ¹øÂ° ¼ö : ");
	scanf_s("%d", &num2);
	
	printf("\n\n");

	printf("===============\n");
	printf("µ¡¼À : %d\n", num1 + num2);
	printf("»¬¼À : %d\n", num1 - num2);
	printf("°ö¼À : %d\n", num1 * num2);
	printf("³ª´°¼À ¸ò : %d\n", num1 / num2);
	printf("³ª´°¼À ³ª¸ÓÁö: %d\n", num1 % num2);
	printf("===============\n\n");

	return 0;
}