#include <stdio.h>
int main(void)
{
	char  buffStr[] = "3Kac#!2FeD";
	char  alphaStr[30];

	int idx = 0;
	int num = 0;
	int i = 0;

	printf("������ ���� �� ������ : %s\n\n", buffStr);

	/* ���ڿ� Ư������ �����ϴ� �ڵ� �߰� */
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


	printf("������ ���� ���� ��� : %s\n\n", alphaStr);

	return 0;
}
