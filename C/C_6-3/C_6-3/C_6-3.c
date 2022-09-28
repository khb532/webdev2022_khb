#include <stdio.h>

int main(void)
{
	int x, y, z;

	
	for (y = 1; y < 8; y++)
	{
		x = 0;
		while (x!=y)
		{
			printf("%d", x+1);
			x++;
			
		}

		for(z=7-y;z>0;z--)
		{
			printf("*");
		}

		printf("\n");
	}
	

return 0;
}