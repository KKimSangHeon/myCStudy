
#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	int b;

	switch (a)
	{
	case 3:
		b = 1;
		break;
	case 5:
		b = 2;
		break;
	case 7:
		b = 3;
		break;

	default:
		b = 0;
		break;
	}

	printf("%d",b);




}

