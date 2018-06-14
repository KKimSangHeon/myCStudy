/*
#include<stdio.h>

int my_Add(int num1, int num2);
int my_Sub(int num1, int num2);
int my_Mul(int num1, int num2);
double my_Div(int num1, int num2);

int main(void)
{
	int num1, num2;
	char oper;
	double result;
	while (1)
	{
		printf("간단한 사칙 계산기 프로그램 입니다.\n");
		printf("입력 예제)  1 + 2\n");
		printf("위 예제처럼 사칙 연산 형태를 입력 :  ");
		scanf("%d %c %d", &num1, &oper, &num2);

		switch (oper)
		{

		case '+':
			printf("연산 결과 : %d %c %d = %d\n", num1, oper, num2, my_Add(num1, num2));
			break;
		case '*':
			printf("연산 결과 : %d %c %d = %d\n", num1, oper, num2, my_Mul(num1, num2));
			break;		
		case '-':
			printf("연산 결과 : %d %c %d = %d\n", num1, oper, num2, my_Sub(num1, num2));
			break;		
		case '/':
			printf("연산 결과 : %d %c %d = %lf\n", num1, oper, num2, my_Div(num1, num2));
			break;

		}
	}
}

int my_Add(int num1, int num2)
{
	return num1 + num2;
}
int my_Sub(int num1, int num2)
{
	return num1 - num2;
}
int my_Mul(int num1, int num2)
{
	return num1 * num2;
}
double my_Div(int num1, int num2)
{
	return (double)num1 / num2;
}
*/