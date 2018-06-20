/*
#include<stdio.h>

typedef struct
{
	int age;
	int* pId;
}PER;
void Display(PER* per);
int main()
{
	int sId = 300;
	PER st = { 20, &sId };
	Display(&st);
	return 0;
}
void Display(PER* per)
{
	printf("%d\n",per->age);
	printf("%d\n", *per->pId);
}
*/