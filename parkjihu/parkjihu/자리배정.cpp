#include <stdio.h>

int main(void)
{
	int x,y,i,num,count = 0;


	scanf("%d%d", &x, &y);

	scanf("%d", &num);

	if (x * y <= num)
	{	
		while (1)
		{
			for (i = 1; i <= x; i++)
			{
				if (count == num)
				{
					printf("%d %d", i, y);
					return 0;
				}
				count++;	 
			}
			x--;

			for (i = 1; i <= y; i++)
			{
				if (count == num)
				{
					printf("%d %d", i, y);
					return 0;
				}
				count++;
			}
			y--;

		}
	}
	

	return 0;
}