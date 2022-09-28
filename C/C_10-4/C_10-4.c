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

	printf("첫번째 파일 입력 : ");
	gets_s(FILENAME1, sizeof(FILENAME1));
	fp1 = fopen(FILENAME1, "r");
	if (fp1 == NULL)
	{
		printf("1번파일 읽기 실패");
		exit(1);
	}

	printf("두번째 파일 입력 : ");
	gets_s(FILENAME2, sizeof(FILENAME2));
	fp2 = fopen(FILENAME2, "r");
	if (fp2 == NULL)
	{
		printf("2번파일 읽기 실패");
		exit(1);
	}

	fgets(FileText1, sizeof(FileText1), fp1);
	fgets(FileText2, sizeof(FileText2), fp2);
	if (strcmp(FileText1, FileText2)==0)
		printf("파일은 서로 일치함\n");	
	else
		printf("%s\n%s\n", FileText1, FileText2);

	return 0;
}