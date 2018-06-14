#include <stdio.h>
int main(void)
{
	char  buffStr[] = "3Kac#!2FeD";
	char  alphaStr[30];

	int idx = 0;
	int num = 0;
	int i = 0;

	printf("영문자 추출 전 데이터 : %s\n\n", buffStr);

	/* 숫자와 특수문자 제거하는 코드 추가 */
	while (buffStr[idx] != '\0'  )
	{
		if ((buffStr[idx] >= 65 && buffStr[idx] <= 90) || (buffStr[idx] >= 97 && buffStr[idx] <= 122))
		{
			alphaStr[i] = buffStr[idx];
			i++;
		}
		idx++;
	}
	alphaStr[i] = buffStr[idx];


	printf("영문자 추출 이후 결과 : %s\n\n", alphaStr);

	return 0;
}
