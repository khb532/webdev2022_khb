#include <stdio.h>
#include <stdlib.h>


typedef struct course
{
	char subject[30];	// ���� �̸�
	double marks;	// ����
}course;



int main(void)
{
	int count=0;
	
	printf("����ü�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &count);

	
	course* COURSE_PTR = malloc(sizeof(course) * count);
	
	for (int i = 0; i < count; i++)
	{
		printf("���� �̸��� ������ �Է� : ");
		scanf_s("%s %lf", &COURSE_PTR[i].subject, sizeof(COURSE_PTR[i].subject), &COURSE_PTR[i].marks);

	}
	for (int i = 0; i < count; i++)
	{
		printf("����� ���� ��� : %s	%f\n",COURSE_PTR[i].subject, COURSE_PTR[i].marks);

	}
	
	free(COURSE_PTR);
	

	return 0;

}