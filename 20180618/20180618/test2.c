/*
#include<stdio.h>
int SumOfArr(int (*pa)[4],int row, int column);
int main()
{
	int res = 0;

	int arr_m[3][4] = 
	{
		{ 5,6,7,8 },
		{ 9,10,11,12 },
		{ 13,14,15,16 }
	};

	res = SumOfArr(arr_m,3,4);
	printf("%d",res);
	return 0;


}
int SumOfArr(int (*pa)[4], int row, int column)
{
	int res = 0;
	int i, j;

	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < column; j++)
		{
			printf("%d ", pa[i][j]);
			res += pa[i][j];
		}
	}

	return res;
}

*/