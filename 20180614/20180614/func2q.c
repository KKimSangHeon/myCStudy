#include<stdio.h>

double GetM(double radius);

int main()
{
	double radius,result;
	printf("���� ������ �Է� : ");
	scanf("%lf", &radius);

	//      �Լ� ȣ��
	result = GetM(radius);

	printf("�������� ���� ���� ���� : %.3lf\n", result);

	return 0;
}

double GetM(double radius)
{
	return 3.14*radius;
}