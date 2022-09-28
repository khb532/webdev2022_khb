#include <iostream>

using namespace std;
/*
class Thisclass
{
private:
	int num;

public:
	Thisclass(int num)	// �Ű������� ��������� �̸��� ������, this�� �������
	{
		//	this�� �ش簴ü�� �ּҸ� ��ȯ
		this->num = num; // private�� ���ٰ���
	}

	void ShowThisNum()
	{
		cout <<"num = "<< this->num << endl;
	}
};

int main(void)
{
	Thisclass obj(100);

	obj.ShowThisNum();

	return 0;
}
*/


// Self Ref. ��ü �ڽ��� �����Ҽ� �ִ� �����ڸ� ��ȯ�ϵ��� �����ϴ½�

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) :num(n) { cout << "��ü�����Ϸ�" << endl; };
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;	// SelfRef& �� ��ȯ��, ���Ϲ��� ������+this (*this) = ��ü �ڽ��� ��ȯ
	}

	SelfRef& Show()
	{
		cout << num << endl;
		return *this;
	}



};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.Show();
	ref.Show();

	ref.Adder(1)/*�����ϰ� 1���ϰ�*/.Show()/*�����ϰ� ����ϰ�*/.Adder(2)/*�����ϰ� 2���ϰ�*/.Show()/*�����ϰ� ����ϰ�*/;	// ��ȯ�� �������̹Ƿ� ������ ������ ���� ����

	return 0;
}

/* �� ������°Ŵ�
int& ref = num;
���� num�� �����Ҽ� �ִ� �������� ref�� ����ȴ�.
ref�� ����num�� ������ �� �ְԵȴ�.
���� �������� ���׿� &���������ڰ� ���ų�, ��ȯ������ &�������� ����ȴٸ� �׶� ���� ���� ������ �������̴�.
*/

