#include <iostream>

using namespace std;




class SimpleClass
{
private:
	int num;
public:
	SimpleClass(int n)	// ������ constructor, <�������� �̸� = Ŭ������ �̸�>, ��ȯ�� ����, ��ü������ �� �ѹ��� ȣ���.
	{
		num = n;
	}
	int GetNum()const
	{
		return num;
	}
};

// SimpleClass obj;
// SimpleClass obj(20);  << ��ü(��) ����

// SimpleClass* obj = new SimpleClass;
// SimpleClass* obj = new SimpleClass(20);	<< �����Ҵ��

class SimpleClass2
{
private :
	int num1;
	int num2;
public :		// �����ڵ��� �����ε��� �� �ִ�.
	SimpleClass2()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass2(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass2(int n, int m)
	{
		num1 = n;
		num2 = m;
	}
};
// SimpleClass sc1;
// SimpleClass sc2(20);
// SimpleClass sc3(20,30);


/*class SimpleClass
{
private:
Point upleft;
Point lowright;

public:
SimpleClass(const int& x1, const int& y1, const int& x2, const int& y2) : upleft(x1,y1), lowright(x2,y2){ }
�� ��� �̴ϼȶ�����, �������� ���ÿ� ��� �ʱ�ȭ
�� ��ü upleft ������ x1, y1 �� ���ڷ� ���� �޴� ������ ȣ��
�� ��ü lowright ������ x2, y2 �� ���ڷ� ���� �޴� ������ ȣ��
*/




