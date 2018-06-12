#include<stdio.h>
int Add(int a, int b);
int main(void) 
{
	int res = 0;
	res = Add(3, 5);
	return 0;
}
int Add(int a, int b) 
{
	int sum = 0;
	sum = a + b;
	return sum;

}