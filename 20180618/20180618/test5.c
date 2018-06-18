/*
#include<stdio.h>
void Display1(char *str[], int rows);
void MyStrCpy(char *source[], char(*dest)[50], int rows);
void Display2(char(*str)[50], int rows);

int main(void)
{
	char* pStr[3] = {
		"Embedded",
		"Good",
		"Study"
	};

	char str[3][50];

	Display1(pStr,3);  // 포인터 배열의 모든 문자열 출력

	MyStrCpy(pStr, str, 3);   // 포인터 배열이 참조 하고 있는 문자열을  2차원 배열로 복사 

	Display2(str,3);  // 2차원 배열의 모든 문자열 출력
	return 0;
}
void Display1(char *str[], int rows) 
{
	int i = 0;
	for (i = 0; i < rows; i++) 
	{
		printf("%s\n", str[i]);
	}
}

void MyStrCpy(char *source[], char(*dest)[50], int rows)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; source[i][j] != '\0'; j++)
		{
			dest[i][j] = source[i][j];

		}
		dest[i][j] = source[i][j];
	}

}

void Display2(char(*str)[50], int rows)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		printf("%s\n", str[i]);
	}

}
*/