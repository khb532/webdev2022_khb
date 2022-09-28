#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <conio.h>

/* ����� �ɼ� �ҷ����� */
void LoadOpt(int * width, int * height)
{

	FILE* fp = fopen("Option.txt", "r");
	if (fp == NULL)
	{
		/*
		������ ���� ��� 
		width 200 height 200�� �ʱⰪ���� �ϴ� �ɼ� ���� ����
		*/
		fp = fopen("Option.txt", "w");
		fprintf(fp,"200 200");
		*width = 200;
		*height = 200;
	}
	else 
	{
		// ���� ������ �����ϴ� ��� �о����
		fscanf_s(fp, "%d", width);
		fscanf_s(fp, "%d", height);
	}
	fclose(fp);
}

/* ���� �ɼ��� ���Ϸ� �����ϱ� */
void SaveOpt(int width, int height)
{
	/* 
	Main���κ��� width�� height�� �Ű������� �Ѱܹް�
	���Ͽ� �����մϴ�
	*/
	FILE* fp = fopen("Option.txt", "w");
	fprintf(fp, "%d %d", width, height);
	fclose(fp);
}

/* 
13���� 4���� ������ �ڵ��Դϴ�
b�� �Է¹����� �簢���� ũ�Ⱑ Ŀ����
s�� �Է¹����� ũ�Ⱑ �۾�����
q�� �Է¹����� ����˴ϴ�
*/
int main(void)
{
	int ch;
	int width , height;
	HDC hdc = GetWindowDC(GetForegroundWindow());


	LoadOpt(&width, &height);

	//printf("%d %d", width, height);
	
	while (1)
	{
		Rectangle(hdc, 100, 100, width, height);
		ch = _getch();
		Rectangle(hdc, 0, 0, 800, 600);
		if (ch == 'b') // ũ�� Ŀ��
		{
			width += 10;
			height += 10;
		}
		else if (ch == 's') // ũ�� �۾���
		{
			width -= 10;
			height -= 10;
		}
		else if (ch == 'q') // ����
		{
			/* SaveOpt�� ȣ���ؼ� �ɼǰ��� �����ϰ� �����մϴ� */
			SaveOpt(width, height);
			break;
		}
		
	}
	printf("width : %d\nheight : %d ����\n\n", width, height); // ����� �ɼ� ǥ��
	return 0;
}
