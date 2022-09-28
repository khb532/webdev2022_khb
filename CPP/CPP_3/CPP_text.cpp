#include <iostream>

//scanf 대신 사용하는 cin 

//int main(void)
//{
//	int val1;
//	std::cout << "첫번째 수:";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두번째 수 : ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "덧셈 : ";
//	std::cout << result;
//
//	return 0;
//
//}

////////////////////////
//지역변수의 선언위치 제약 없음

//int main(void)
//{
//	int val1, val2;
//	int result = 0;
//	std::cout << "두개의 숫자 입력 : ";
//	std::cin >> val1 >> val2;
//
//	if (val1 < val2)
//	{
//		for (int i = val1 + 1; i < val2; i++)
//		{
//			result += i;
//		}
//	}
//	else
//	{
//		for (int i = val2 + 1; i < val2; i++)
//		{
//			result += i;
//		}
//	}
//
//	std::cout << "두 수 사이의 정수합 : " << result << std::endl;
//	return 0;
//}

////////////////////////
// 문자열의 입력

//int main(void)
//{
//	char str[100];
//	std::cin >> str;
//
//	std::cout << str << std::endl;
//
//	return 0;
//
//}

////////////////////////
// 문제 01-1-1

//int main(void)
//{
//	using namespace std;
//
//	int val, sum =0;
//
//	for (int i = 1; i < 6; i++)
//	{
//		cout << i << "번째 정수 입력 : ";
//		cin >> val;
//		sum += val;
//
//	}
//	cout << "총합 : " << sum << endl;
//
//	return 0;
//}

////////////////////////
// 문제 01-1-4

//int main(void)
//{
//	int sale , pay;
//
//	while (1)
//	{
//		std::cout << "판매금액을 만단위로 입력 : (중지는 -1)";
//		std::cin >> sale;
//		if (sale == -1)
//			break;
//
//		pay = 50 + sale * 0.12;
//		std::cout << "이번달 급여 : " << pay << std::endl;
//	}
//
//	return 0;
//}

////////////////////////
// ###01-2 함수 오버로딩
//
//void MyFunc(void)
//{
//	std::cout << "MyFunc(void) Called" << std::endl;
//}
//
//void MyFunc(char c)
//{
//	std::cout << "MyFunc(char c) Called" << std::endl;
//}
//
//void MyFunc(int a, int b)
//{
//	std::cout << "MyFunc(int a, int b) Called" << std::endl;
//}
//
//int main(void)
//{
//	MyFunc();
//	MyFunc('a');
//	MyFunc(3, 4);
//
//	return 0;
//}

////////////////////////
// 매개변수 디폴트

//int Adder(int num1 = 1, int num2 = 2)
//{
//	std::cout << "num1의값 : " << num1 <<"  "<< "num2의값 : "<<num2 << std::endl;
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(3, 4) << std::endl; 
//	std::cout << Adder(5) << std::endl; // num1=5,num2=2디폴트
//
//	return 0;
//}

////////////////////////
// 디폴트 값을 설정시 왼쪽부터 비워야함, 오른쪽만 비울수 없음

//int Adder(int num1, int num2, int num3 = 30); // O
//int Adder(int num1 = 20, int num2, int num3); // X


////////////////////////
//  Inline 함수

// 매크로 함수

//#define SQUARE(x) ((x)*(x))
//
//int main(void)
//{
//	std::cout << SQUARE(5) << std::endl;
//	return 0;
//}

// 인라인 함수

//inline int SQUARE(int x)
//{
//	return x * x;
//}
//
//int main(void)
//{
//	using namespace std;
//
//	cout << SQUARE(5) << endl;
//	cout << SQUARE(12) << endl;
//
//	return 0;
//}

////////////////
// namespace 예시

//namespace Alpha
//{
//	int num = 1;
//
//	void Func(void)
//	{
//		std::cout << "Alpha::Func" << std::endl;
//		std::cout << "Alpha num:" <</*Beta:: 베타가 나중에 선언되서 안댐*/ num << std::endl; // Alpha의 num
//	}
//}
//
//namespace Beta
//{
//	int num = 2;
//	void Func(void)
//	{
//		std::cout << "Beta::Func" << std::endl;
//		std::cout << "Beta num:" << /*Alpha:: 위에 알파가 선언되었으므로 가능*/num << std::endl; // 네임스페이스 공간내에서 호출하므로 자동으로 Beta::num
//	}
//}
//	// 함수의 이름이 같으나 다른 네임스페이스에 선언되었음
//	// 호출은 네임스페이스::함수,변수 등등
//	// ex) Alpha::Func
//
//int main(void)
//{
//	Alpha::Func();
//	Beta::Func();
//
//	return 0;
//}

// using 예시

//using AAA::Func, Num 등등
//AAA네임스페이스 공간내에 Func, Num만을 쓰겠다 + 다른 val이나 simple은 못씀, 추가로 선언해줘야한다
//
//using namespace AAA;
//AAA 네임스페이스를 통째로 쓰겠다.

// ::연산자의 활용

//int val = 7; // 전역변수
//int main(void)
//{
//	int val = 5; // main의 지역변수
//	std::cout << "지역변수 val 호출:" << val << std::endl;
//	std::cout << "전역변수 val 호출:" << ::val << std::endl;
//
//	return 0;
//}

