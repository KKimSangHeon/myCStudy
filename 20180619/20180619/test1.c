/*
#include<stdio.h>
#include<stdlib.h>
int* Input(void);
void Display(int** pD);


int main(void) 
{
	int* ptr = NULL;
	ptr = Input();
	Display(&ptr);
	return 0;

}
int* Input(void)
{
	int *score = (int*)malloc(sizeof(int)*4);

	scanf("%d", &score[0]);
	scanf("%d", &score[1]);
	scanf("%d", &score[2]);

	return score;

}
void Display(int** pD)
{

	printf("%d\n", (*pD)[0]);
	printf("%d\n", (*pD)[1]);
	printf("%d\n", (*pD)[2]);
	printf("%d\n", ((*pD)[0]+ (*pD)[1]+ (*pD)[2])/3);
}
*/