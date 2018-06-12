#include<stdio.h>

int main(void)
{
	int sum = 0;
	int subject1 = 0;
	int subject2 = 0;
	int subject3 = 0;
	char grade;

	printf("input score1: ");
	scanf("%d",&subject1);
	sum += subject1;

	printf("input score2: ");
	scanf("%d", &subject2);
	sum += subject2;

	printf("input score3: ");
	scanf("%d", &subject3);
	sum += subject3;

	if (sum >= 90) 
	{
		grade = 'A';
	}
	else if (sum >= 80)
	{
		grade = 'B';
	}
	else if (sum >= 70)
	{
		grade = 'C';
	}
	else
	{
		grade = 'F';
	}


	printf("%.1lf %c",(double)sum/3,grade);
}
