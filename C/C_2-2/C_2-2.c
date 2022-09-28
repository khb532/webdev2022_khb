#include <stdio.h>

int main(void)
{
	char name[10];
	char adr[10];
	int p_num;

	printf("이름 : ");
	scanf_s("%s",name,sizeof(name));
	printf("주소 : ");
	scanf_s("%s",adr,sizeof(adr));
	printf("전화번호 : ");
	scanf_s("%d", &p_num);

	printf("=============\n");
	printf("이름 : %s\n",name);
	printf("주소 : %s\n",adr);
	printf("전화번호 : %d\n", p_num);
	printf("==============");
	printf("\n\n");

	return 0;


}