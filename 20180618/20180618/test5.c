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

	Display1(pStr,3);  // ������ �迭�� ��� ���ڿ� ���

	MyStrCpy(pStr, str, 3);   // ������ �迭�� ���� �ϰ� �ִ� ���ڿ���  2���� �迭�� ���� 

	Display2(str,3);  // 2���� �迭�� ��� ���ڿ� ���
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