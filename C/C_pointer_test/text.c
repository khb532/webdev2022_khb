#include<stdio.h>	

int main(void)
{
	int num1 = 10;
	int* ptr = &num1;

	printf("%d",ptr);// �ּҰ� ��µ�
	printf("\n");
	printf("%d", *ptr);// num1 �� ��µ�
	printf("\n");

	char str[10] = "String";
	printf("%s", str);
	printf("\n");
	//cout << str << endl; // ���ڿ� String�� ��µ�

	return 0;
}