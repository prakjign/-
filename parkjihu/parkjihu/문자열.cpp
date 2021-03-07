#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1010
char a[N], b[N], total[200];

int main(void)
{

	
	int count = 1, i, s;


	scanf("%s\n%s", a, b); 

	s = strlen(a) - 1;
	printf("11%d11", s);
	for (i = 0; i <= s; i++)
	{
		total[a[i]] += 1; 
		printf("%d\n", a[i]);

	}

	s = strlen(b) - 1;
	
	for (i = 0; i < s; i++)
	{
		if (total[b[i]] == 1)
		{
			count++; 
		}
	}

	printf("%d", count);

	system("PAUSE");
	return 0; 
}