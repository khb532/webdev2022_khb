#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;


void CreatNum (void)
{
	int arr[10];

	random_device rd;

	// random_device �� ���� ���� ���� ������ �ʱ�ȭ �Ѵ�.
	mt19937 gen(rd());

	// 0 ���� 99 ���� �յ��ϰ� ��Ÿ���� �������� �����ϱ� ���� �յ� ���� ����.
	uniform_int_distribution<int> dis(0, 99);

	for (int i = 0; i < 10; i++)
	{
		arr[i] = dis(gen);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

}

int main(void)
{
	int pos;
	cout << " 1 : ����, 2 : ����" << endl;
	while(1)
	{
		cin >> pos;
		switch(pos)
		{
			case 1:
			{
				system("cls");
				cout << " 1 : ����, 2 : ����" << endl;
				cout << "List >> ";
				CreatNum();
				cout << endl;
				break;
			}
			case 2:
				return 0;

			default:
			{
				cout << "�߸��Է�" << endl;
				cin.clear();
				cin.ignore(100, '\n');
				break;
			}
		}
	}
}