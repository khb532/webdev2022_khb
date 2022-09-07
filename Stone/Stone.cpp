#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;


void CreatNum (void)
{
	int arr[10];

	random_device rd;

	// random_device 를 통해 난수 생성 엔진을 초기화 한다.
	mt19937 gen(rd());

	// 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
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
	cout << " 1 : 생성, 2 : 종료" << endl;
	while(1)
	{
		cin >> pos;
		switch(pos)
		{
			case 1:
			{
				system("cls");
				cout << " 1 : 생성, 2 : 종료" << endl;
				cout << "List >> ";
				CreatNum();
				cout << endl;
				break;
			}
			case 2:
				return 0;

			default:
			{
				cout << "잘못입력" << endl;
				cin.clear();
				cin.ignore(100, '\n');
				break;
			}
		}
	}
}