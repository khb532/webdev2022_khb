#include <stdio.h>

int main(void)
{
	char name[10];
	char adr[10];
	int p_num;

	printf("�̸� : ");
	scanf_s("%s",name,sizeof(name));
	printf("�ּ� : ");
	scanf_s("%s",adr,sizeof(adr));
	printf("��ȭ��ȣ : ");
	scanf_s("%d", &p_num);

	printf("=============\n");
	printf("�̸� : %s\n",name);
	printf("�ּ� : %s\n",adr);
	printf("��ȭ��ȣ : %d\n", p_num);
	printf("==============");
	printf("\n\n");

	return 0;


}