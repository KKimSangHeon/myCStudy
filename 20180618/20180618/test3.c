/*
#include<stdio.h>
#include<string.h>
void Input_string(char(*str)[100], int row);
int Output_string(char * str, char(*source)[100], int rowLen,int len);
int main(void)
{
	char str[3][100];
	int res = 0;

	Input_string(str,3);

	res = Output_string("kim", str, 3, 3);

	printf("%d", res);
	return 0;
}
void Input_string(char(*str)[100], int row)
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		scanf("%s",str[i]);
	}
}
int Output_string(char * str, char(*source)[100], int rowLen,int len)
{
	int counter = 0;
	int i = 0;

	for (i = 0; i < rowLen; i++) 
	{
		if (!strncmp(source[i], str, len)) 
		{
			counter++;
		}
	}
	return counter;
}
*/