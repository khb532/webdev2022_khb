#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <conio.h>

/* 저장된 옵션 불러오기 */
void LoadOpt(int * width, int * height)
{

	FILE* fp = fopen("Option.txt", "r");
	if (fp == NULL)
	{
		/*
		파일이 없는 경우 
		width 200 height 200을 초기값으로 하는 옵션 파일 생성
		*/
		fp = fopen("Option.txt", "w");
		fprintf(fp,"200 200");
		*width = 200;
		*height = 200;
	}
	else 
	{
		// 기존 파일이 존재하는 경우 읽어오기
		fscanf_s(fp, "%d", width);
		fscanf_s(fp, "%d", height);
	}
	fclose(fp);
}

/* 현재 옵션을 파일로 저장하기 */
void SaveOpt(int width, int height)
{
	/* 
	Main으로부터 width와 height를 매개변수로 넘겨받고
	파일에 저장합니다
	*/
	FILE* fp = fopen("Option.txt", "w");
	fprintf(fp, "%d %d", width, height);
	fclose(fp);
}

/* 
13주차 4차시 수업의 코드입니다
b를 입력받으면 사각형의 크기가 커지고
s를 입력받으면 크기가 작아지고
q를 입력받으면 종료됩니다
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
		if (ch == 'b') // 크기 커짐
		{
			width += 10;
			height += 10;
		}
		else if (ch == 's') // 크기 작아짐
		{
			width -= 10;
			height -= 10;
		}
		else if (ch == 'q') // 종료
		{
			/* SaveOpt를 호출해서 옵션값을 저장하고 종료합니다 */
			SaveOpt(width, height);
			break;
		}
		
	}
	printf("width : %d\nheight : %d 저장\n\n", width, height); // 저장된 옵션 표시
	return 0;
}
