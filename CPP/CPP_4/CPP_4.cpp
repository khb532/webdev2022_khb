#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
///////////////////////
// bool형 데이터타입
// ture : 1
// false : 1
// sizeof(true) : 1
// sizeof(false) : 1

// int num = true  >> 1
// int num2 = false >> 0
// bool Data = ture;
// if(Data){}.. 참

//////////////

// 참조자, 레퍼런스 Reference
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
//	// int &Num2; (x) : 선언과 동시에 초기화해야함
//	// int &Num2=NULL; (x) : 널로 초기화 불가
//	Swap(num1, num2); // 매개변수로 레퍼런스를 선언, 전달은 변수로
//	cout << num1 << endl;
//	cout << num2 << endl;
//
//	return 0;
//}

/* 
int& Func (int& aaa){} 반환형이 참조자형일 경우
int val1 = Func(..);  (o)
int& val2 = Func(..); (o)

int Func (int& aaa){} 반환형이 기본정수형일 경우 (상수와 같음)
int val1 = Func(..);  (o)
int& val2 = Func(..); (x)
*/

/*
지역변수를 참조자형으로 반환할경우 스코프를 벗어나면 지역변수가 소멸.
*/

///////////////////////////////

// new, delete 연산자
//
//#include <string.h>
//#include <stdlib.h>		// C언어 헤더파일. 확장자.h가 붙음, C++에서는 <iostream>처럼 붙지않음
//
//char* MakeStrAdr(int len)
//{
//	char* str = (char*)malloc(sizeof(char) * len);	// 할당할 메모리의 타입형 포인터 + malloc + 할당할 메모리의 총 크기
//	return str;	// str에 동적할당한 char형 동적메모리를 여러개 할당한 char동적배열 의 주소
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

// 문제 02-4 . 1
//
//#include<cstring>
//
//char str1[] = "abcdefg";
//char str2[] = "가나다라";
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
//	cout << ptr << endl;// 주소값 출력됨
//	cout << *ptr << endl; // num1 값 출력됨
//
//	char str[10] = "String";
//	cout << str << endl; // 문자열 String이 출력됨
//
//	return 0;
//}