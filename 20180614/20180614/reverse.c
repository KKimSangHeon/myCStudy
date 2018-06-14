#include<stdio.h>

void reverse(int * num1, int * num2);

int main() 
{

	int a = 5;
	int b = 8;
	printf("a : %d, b : %d\n",a,b);

	reverse(&a,&b);
	printf("a : %d, b : %d", a, b);



}

void reverse(int * num1, int * num2)
{
	int temp;
	temp = *num2;
	*num2 = *num1;
	*num1 = temp;
}