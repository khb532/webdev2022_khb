#include<stdio.h>	

int main(void)
{
	int num1 = 10;
	int* ptr = &num1;

	printf("%d",ptr);// 주소값 출력됨
	printf("\n");
	printf("%d", *ptr);// num1 값 출력됨
	printf("\n");

	char str[10] = "String";
	printf("%s", str);
	printf("\n");
	//cout << str << endl; // 문자열 String이 출력됨

	return 0;
}