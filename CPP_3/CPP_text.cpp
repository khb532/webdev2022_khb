#include <iostream>

//scanf ��� ����ϴ� cin 

//int main(void)
//{
//	int val1;
//	std::cout << "ù��° ��:";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "�ι�° �� : ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "���� : ";
//	std::cout << result;
//
//	return 0;
//
//}

////////////////////////
//���������� ������ġ ���� ����

//int main(void)
//{
//	int val1, val2;
//	int result = 0;
//	std::cout << "�ΰ��� ���� �Է� : ";
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
//	std::cout << "�� �� ������ ������ : " << result << std::endl;
//	return 0;
//}

////////////////////////
// ���ڿ��� �Է�

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
// ���� 01-1-1

//int main(void)
//{
//	using namespace std;
//
//	int val, sum =0;
//
//	for (int i = 1; i < 6; i++)
//	{
//		cout << i << "��° ���� �Է� : ";
//		cin >> val;
//		sum += val;
//
//	}
//	cout << "���� : " << sum << endl;
//
//	return 0;
//}

////////////////////////
// ���� 01-1-4

//int main(void)
//{
//	int sale , pay;
//
//	while (1)
//	{
//		std::cout << "�Ǹűݾ��� �������� �Է� : (������ -1)";
//		std::cin >> sale;
//		if (sale == -1)
//			break;
//
//		pay = 50 + sale * 0.12;
//		std::cout << "�̹��� �޿� : " << pay << std::endl;
//	}
//
//	return 0;
//}

////////////////////////
// ###01-2 �Լ� �����ε�
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
// �Ű����� ����Ʈ

//int Adder(int num1 = 1, int num2 = 2)
//{
//	std::cout << "num1�ǰ� : " << num1 <<"  "<< "num2�ǰ� : "<<num2 << std::endl;
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(3, 4) << std::endl; 
//	std::cout << Adder(5) << std::endl; // num1=5,num2=2����Ʈ
//
//	return 0;
//}

////////////////////////
// ����Ʈ ���� ������ ���ʺ��� �������, �����ʸ� ���� ����

//int Adder(int num1, int num2, int num3 = 30); // O
//int Adder(int num1 = 20, int num2, int num3); // X


////////////////////////
//  Inline �Լ�

// ��ũ�� �Լ�

//#define SQUARE(x) ((x)*(x))
//
//int main(void)
//{
//	std::cout << SQUARE(5) << std::endl;
//	return 0;
//}

// �ζ��� �Լ�

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
// namespace ����

//namespace Alpha
//{
//	int num = 1;
//
//	void Func(void)
//	{
//		std::cout << "Alpha::Func" << std::endl;
//		std::cout << "Alpha num:" <</*Beta:: ��Ÿ�� ���߿� ����Ǽ� �ȴ�*/ num << std::endl; // Alpha�� num
//	}
//}
//
//namespace Beta
//{
//	int num = 2;
//	void Func(void)
//	{
//		std::cout << "Beta::Func" << std::endl;
//		std::cout << "Beta num:" << /*Alpha:: ���� ���İ� ����Ǿ����Ƿ� ����*/num << std::endl; // ���ӽ����̽� ���������� ȣ���ϹǷ� �ڵ����� Beta::num
//	}
//}
//	// �Լ��� �̸��� ������ �ٸ� ���ӽ����̽��� ����Ǿ���
//	// ȣ���� ���ӽ����̽�::�Լ�,���� ���
//	// ex) Alpha::Func
//
//int main(void)
//{
//	Alpha::Func();
//	Beta::Func();
//
//	return 0;
//}

// using ����

//using AAA::Func, Num ���
//AAA���ӽ����̽� �������� Func, Num���� ���ڴ� + �ٸ� val�̳� simple�� ����, �߰��� ����������Ѵ�
//
//using namespace AAA;
//AAA ���ӽ����̽��� ��°�� ���ڴ�.

// ::�������� Ȱ��

//int val = 7; // ��������
//int main(void)
//{
//	int val = 5; // main�� ��������
//	std::cout << "�������� val ȣ��:" << val << std::endl;
//	std::cout << "�������� val ȣ��:" << ::val << std::endl;
//
//	return 0;
//}

