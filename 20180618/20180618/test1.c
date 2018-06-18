#include<stdio.h>

void reverse(int ** a, int ** b);

int main(void)
{
	int temp = 5;
	int val = 8;
	int * pt = &temp;
	int * pv = &val;
	printf("temp : %d, val: %d\n",temp, val);
	printf("*pt : %d, *pv: %d\n", *pt, *pv);
	
	reverse(&pt,&pv);

	printf("temp : %d, val: %d\n", temp, val);
	printf("*pt : %d, *pv: %d\n", *pt, *pv);

	return 0;
}

void reverse(int ** a, int ** b)
{
	int * temp;
	temp = *b;
	*b = *a;
	*a = temp;
}