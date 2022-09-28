#include<stdio.h>
#include <conio.h>

int main(void)
{
	
	char sentence[100];
	int word[100];

	printf("문장을 입력 : ");
	gets_s(sentence, sizeof(sentence));

	printf("단어를 입력 : ");
	scanf_s("%s", word, sizeof(word));

	printf("====================\n");

	printf("입력된 문장 : %s\n", sentence);
	printf("입력된 단어 : %s\n", word);
	
	return 0;
}