#include<stdio.h>
typedef struct
{
	int age;
	double pay;
	char name[30];
}PER;
void InputData(PER * arr);
void PrintData(PER * arr);
int main() 
{
	PER arr[3];

	InputData(arr);
	PrintData(arr);


}
void InputData(PER * arr)
{
	int i = 0;
	for (i = 0; i < 3; i++) 
	{
		scanf("%d",&arr[i].age);
		scanf("%lf", &arr[i].pay);
		scanf("%s", arr[i].name);
	}
}
void PrintData(PER * arr)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i].age);
		printf("%lf\n", arr[i].pay);
		printf("%s\n", arr[i].name);
	}
}