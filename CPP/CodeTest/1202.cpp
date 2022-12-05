#include <iostream>

using namespace std;


long long solution(int price, int money, int count)
{
	int pay = 0;
	for (int i = 1; i < count + 1; i++)
	{
		pay += price * i;
		cout << pay << endl;
	}
	return abs(money - pay);
}

int main(void)
{
	cout << solution(3, 20, 4);

	return 0;
}