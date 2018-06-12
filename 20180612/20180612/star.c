#include<stdio.h>
int main() 
{
	int spaceCounter;
	int input;
	int astCounter = 1;
	int i,j;

	scanf("%d",&input);
	spaceCounter = input-1;

	for (i = 0; i < input; i++) 
	{

		for (j = 0; j < spaceCounter; j++) 
		{
			printf(" ");
		}


		for (j=0;j<astCounter;j++)
		{
			printf("*");

		}
		spaceCounter--;
		astCounter += 2;

		printf("\n");
		
	}

}