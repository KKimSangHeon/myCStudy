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
		printf("������ ��Ģ ���� ���α׷� �Դϴ�.\n");
		printf("�Է� ����)  1 + 2\n");
		printf("�� ����ó�� ��Ģ ���� ���¸� �Է� :  ");
		scanf("%d %c %d", &num1, &oper, &num2);

		switch (oper)
		{

		case '+':
			printf("���� ��� : %d %c %d = %d\n", num1, oper, num2, my_Add(num1, num2));
			break;
		case '*':
			printf("���� ��� : %d %c %d = %d\n", num1, oper, num2, my_Mul(num1, num2));
			break;		
		case '-':
			printf("���� ��� : %d %c %d = %d\n", num1, oper, num2, my_Sub(num1, num2));
			break;		
		case '/':
			printf("���� ��� : %d %c %d = %lf\n", num1, oper, num2, my_Div(num1, num2));
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