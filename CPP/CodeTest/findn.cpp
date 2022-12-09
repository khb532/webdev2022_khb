#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i*i < n+1; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

void solution(int n)
{
	int count = 1;
	if (n == 2)
	{
		cout << count << endl;
		return;
	}

	for (int i = 3; i < n+1; i++)
	{
		if (isPrime(i) == true)
			count++;
	}

	cout << count << endl;
}

int main (void)
{
	solution(10);

	return 0;
}