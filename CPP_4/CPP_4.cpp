#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
///////////////////////
// bool�� ������Ÿ��
// ture : 1
// false : 1
// sizeof(true) : 1
// sizeof(false) : 1

// int num = true  >> 1
// int num2 = false >> 0
// bool Data = ture;
// if(Data){}.. ��

//////////////

// ������, ���۷��� Reference
//
//void Swap(int& ref1, int& ref2)
//{
//	int tmp = ref1;
//	ref1 = ref2;
//	ref2 = tmp;
//}
//
//int main(void)
//{
//	int num1 = 100;
//	int num2 = 200;
//	int& ref1 = num1;
//	int& ref2 = num2;
//
//	
//	// int &Num2; (x) : ����� ���ÿ� �ʱ�ȭ�ؾ���
//	// int &Num2=NULL; (x) : �η� �ʱ�ȭ �Ұ�
//	Swap(num1, num2); // �Ű������� ���۷����� ����, ������ ������
//	cout << num1 << endl;
//	cout << num2 << endl;
//
//	return 0;
//}

/* 
int& Func (int& aaa){} ��ȯ���� ���������� ���
int val1 = Func(..);  (o)
int& val2 = Func(..); (o)

int Func (int& aaa){} ��ȯ���� �⺻�������� ��� (����� ����)
int val1 = Func(..);  (o)
int& val2 = Func(..); (x)
*/

/*
���������� ������������ ��ȯ�Ұ�� �������� ����� ���������� �Ҹ�.
*/

///////////////////////////////

// new, delete ������
//
//#include <string.h>
//#include <stdlib.h>		// C��� �������. Ȯ����.h�� ����, C++������ <iostream>ó�� ��������
//
//char* MakeStrAdr(int len)
//{
//	char* str = (char*)malloc(sizeof(char) * len);	// �Ҵ��� �޸��� Ÿ���� ������ + malloc + �Ҵ��� �޸��� �� ũ��
//	return str;	// str�� �����Ҵ��� char�� �����޸𸮸� ������ �Ҵ��� char�����迭 �� �ּ�
//}
//
//int main(void)
//{
//	char* str = MakeStrAdr(20);
//	strcpy(str, "I am boy");
//	cout << str << endl;
//	free(str);
//	return 0;
//}
//

//
//#include <stdlib.h>
//
//class simple
//{
//public:
//	simple()
//	{
//		cout << "simple instance" << endl;
//	}
//};
//
//int main(void)
//{
//	cout << "case 1:";
//	simple* sp1 = new simple;
//
//	cout << "case 2:";
//	simple* sp2 = (simple*)malloc(sizeof(simple) * 1);
//	cout << endl << "end of main" << endl;
//	
//	delete sp1;
//	free(sp2);
//
//	return 0;
//}

//
//typedef struct __Point
//{
//	int xpos;
//	int ypos;
//
//}Point;
//
//Point& PointAdder(const Point& p1, const Point& p2)
//{
//	Point* rp = new Point;
//	rp->xpos = p1.xpos + p2.xpos;
//	rp->ypos = p1.ypos + p2.ypos;
//	return *rp;
//
//}
//
//int main(void)
//{
//	Point* mp1 = new Point;
//	mp1->xpos = 1;
//	mp1->ypos = 2;
//
//	Point* mp2 = new Point;
//	mp2->xpos = 3;
//	mp2->ypos = 4;
//
//	Point& endp = PointAdder(*mp1, *mp2);
//	cout << endp.xpos << endl << endp.ypos << endl;
//
//	return 0;
//
//
//}

// ���� 02-4 . 1
//
//#include<cstring>
//
//char str1[] = "abcdefg";
//char str2[] = "�����ٶ�";
//
//int main(void)
//{
//	int n = strlen(str2);
//	cout << str1 << str2 << endl;
//	cout << "strlen : " << strlen(str1) << endl;
//	cout << "strcpy : " << strcpy(str1,str2) << endl;
//	cout << "strcat : " << strcat(str1, str2) << endl;
//	cout << "strcmp : " << strcmp(str1, str2) << endl;
//
//	return 0;
//}

#include <cstdlib>
#include <ctime>

//int main(void)
//{
//	srand((unsigned)time(NULL));
//	int rnum;
//
//	for (int i = 0; i < 5; i++)
//	{
//		rnum = rand() % 100;
//		cout << "random number : " << rnum << endl;
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int num1 = 10;
//	int* ptr = &num1;
//
//	cout << ptr << endl;// �ּҰ� ��µ�
//	cout << *ptr << endl; // num1 �� ��µ�
//
//	char str[10] = "String";
//	cout << str << endl; // ���ڿ� String�� ��µ�
//
//	return 0;
//}