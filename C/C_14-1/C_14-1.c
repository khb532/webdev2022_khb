#include<stdio.h>
#include <conio.h>

int main(void)
{
	
	char sentence[100];
	int word[100];

	printf("������ �Է� : ");
	gets_s(sentence, sizeof(sentence));

	printf("�ܾ �Է� : ");
	scanf_s("%s", word, sizeof(word));

	printf("====================\n");

	printf("�Էµ� ���� : %s\n", sentence);
	printf("�Էµ� �ܾ� : %s\n", word);
	
	return 0;
}