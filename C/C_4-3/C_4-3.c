#include<stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;

	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("비트 AND = %d\n", x & y);
	printf("비트 OR = %d\n", x | y);
	printf("비트 XOR = %d\n", x ^ y);
	printf("비트 NOT = %d\n", ~x);
	printf("========\n");
	
	printf("x<<1 = %d\n", x << 1);
	printf("x<<2 = %d\n", x << 2);
	printf("y>>1 = %d\n", y >> 1);
	printf("y>>2 = %d\n", y >> 2);

	return 0;


}