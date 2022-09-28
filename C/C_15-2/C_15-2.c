#include <stdio.h>
#include <stdlib.h>


typedef struct course
{
	char subject[30];	// 과목 이름
	double marks;	// 학점
}course;



int main(void)
{
	int count=0;
	
	printf("구조체의 개수를 입력하세요 : ");
	scanf_s("%d", &count);

	
	course* COURSE_PTR = malloc(sizeof(course) * count);
	
	for (int i = 0; i < count; i++)
	{
		printf("과목 이름과 성적을 입력 : ");
		scanf_s("%s %lf", &COURSE_PTR[i].subject, sizeof(COURSE_PTR[i].subject), &COURSE_PTR[i].marks);

	}
	for (int i = 0; i < count; i++)
	{
		printf("저장된 정보 출력 : %s	%f\n",COURSE_PTR[i].subject, COURSE_PTR[i].marks);

	}
	
	free(COURSE_PTR);
	

	return 0;

}