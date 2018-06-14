#include<stdio.h>

double GetM(double radius);

int main()
{
	double radius,result;
	printf("원의 반지름 입력 : ");
	scanf("%lf", &radius);

	//      함수 호출
	result = GetM(radius);

	printf("반지름에 따른 원의 넓이 : %.3lf\n", result);

	return 0;
}

double GetM(double radius)
{
	return 3.14*radius;
}