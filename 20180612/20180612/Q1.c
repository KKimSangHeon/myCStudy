

//1. 문제  큰수를 찾으세요.

#include <stdio.h>

int main()
{
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	int max;

	scanf("%d %d %d", &val1, &val2, &val3);

	if (val1 > val2 && val1 > val3) 
	{
		max = val1;
	}
	else if (val2 > val3) 
	{
		max = val2;
	}
	else
	{
		max = val3;
	}


	printf("max : %d\n", max);

	return 0;
}
