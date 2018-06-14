#include<stdio.h>
int pow(int num1, int num2);
int main()
{
	int num, multi;
	int result = 0;

	printf("입력 받은 정수(num)를 입력 받은 지수승(multi) 만큼 제곱하여 출력하는 프로그램\n\n");
	printf("계산할 정수(num) 입력 : ");
	scanf("%d", &num);
	printf("계산할 지수승(multi) 입력 : ");
	scanf("%d", &multi);

	// 함수 호출


	printf("\n%d의 %d 제곱한 결과는 %d입니다.\n", num, multi, pow(num, multi));

	return 0;
}
int pow(int num1, int num2)
{
	int i = 0;
	int result = 1;
	for (i=0;i<num2;i++)
	{
		result *= num1;
	}
	return result;

}