#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

int main (void)
{
	char FILENAME1[20];
	char FILENAME2[20];
	char FileText1[100];
	char FileText2[100];
	FILE *fp1, *fp2;

	printf("ù��° ���� �Է� : ");
	gets_s(FILENAME1, sizeof(FILENAME1));
	fp1 = fopen(FILENAME1, "r");
	if (fp1 == NULL)
	{
		printf("1������ �б� ����");
		exit(1);
	}

	printf("�ι�° ���� �Է� : ");
	gets_s(FILENAME2, sizeof(FILENAME2));
	fp2 = fopen(FILENAME2, "r");
	if (fp2 == NULL)
	{
		printf("2������ �б� ����");
		exit(1);
	}

	fgets(FileText1, sizeof(FileText1), fp1);
	fgets(FileText2, sizeof(FileText2), fp2);
	if (strcmp(FileText1, FileText2)==0)
		printf("������ ���� ��ġ��\n");	
	else
		printf("%s\n%s\n", FileText1, FileText2);

	return 0;
}