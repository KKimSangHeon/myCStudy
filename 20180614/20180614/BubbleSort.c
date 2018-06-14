#include<stdio.h>
int main()
{
	int arr[] = { 1,5,81,8,3,5 };
	int i, j, temp;
	
	for (i = 0; i < (sizeof(arr) / sizeof(int)) -1; i++) 
	{
		for (j = 0; j < (sizeof(arr) / sizeof(int)) - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1]) 
			{

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}

	for (i = 0; i < sizeof(arr) / sizeof(int) - 1; i++)
	{
		printf("%d ", arr[i]);
	}


}