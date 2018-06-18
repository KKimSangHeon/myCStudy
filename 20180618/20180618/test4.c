/*
#include<stdio.h>
int find_UpAlpha(char(*pS)[50], int rows);
int main(void)
{
	char str[3][50] = {
		"embeDded",
		"sTudy",
		"Good"
	};
	int num = 0;
	int rows = 3;
	num = find_UpAlpha(str, rows); // 2차원 배열의 대문자의 개수를 찾아 리턴하는 함수 구현

	printf("num : %d\n", num);

	return 0;
}



int find_UpAlpha(char(*pS)[50], int rows)
{
	int i = 0;
	int j = 0;
	int UpperCounter = 0;

	for (i = 0; i < rows; i++)
	{
		for(j=0; pS[i][j] != '\0';j++)
		{
			if(pS[i][j] >= 'A' && pS[i][j] <= 'Z')
				UpperCounter++;
		}

	}

	return UpperCounter;

}*/