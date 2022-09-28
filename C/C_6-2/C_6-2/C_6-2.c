#include <stdio.h>

int main(void)
{
	int n = 0;
	do
	{
		printf("%d\n", n);
		n = n - 3;
	} while (n > 0);

	return 0;
}