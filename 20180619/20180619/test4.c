/*

#include<stdio.h>
typedef struct 
{
	int age;
	double pay;
	char name[30];
}PER;

void Display(PER * pointer);

int main()
{
	PER p1 = {30,54.34,"kIM"};
	Display(&p1);
	printf("age:%d\n", p1.age);
	printf("pay:%lf\n", p1.pay);
	printf("name:%s\n",p1.name);
}

void Display(PER * pointer)
{
	scanf("%d", &(pointer->age));
	scanf("%lf",&(pointer->pay));
	scanf("%s",&(pointer->name));
}
*/