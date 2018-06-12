/*
3.  두 정수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력 합니다.
아니면 아닙니다.
맞으면 두수의 합을 출력
*/

#include<stdio.h>
int main()
{
	int input1 = 0, input2 = 0;
	int sum = 0;

	scanf("%d", &input1);
	scanf("%d", &input2);

	sum = input1 + input2;

	if (sum % 2 == 0 && sum % 3 == 0) 
	{
		printf("%d 맞습니다\n", sum);
	}
	else
	{
		printf("아닙니다\n");
	}

}