/*
#include<stdio.h>
#include<stdlib.h>
typedef struct {
	char name[30];
	int grade;
	double avg;
}Tennis;

void Display(Tennis **p);
void Insert(Tennis **p);
int main(void)
{

	Tennis *pAr[3];
	Insert(pAr);
	Display(pAr);
	return 0;

}
void Insert(Tennis **p)
{
	p[0] = (Tennis*) malloc(sizeof(Tennis));
	p[1] = (Tennis*)malloc(sizeof(Tennis));
	p[2] = (Tennis*)malloc(sizeof(Tennis));
	scanf("%s %d %lf", p[0]->name, &(p[0]->grade), &(p[0]->avg));
	scanf("%s %d %lf", p[1]->name, &(p[1]->grade), &(p[1]->avg));
	scanf("%s %d %lf", p[2]->name, &(p[2]->grade), &(p[2]->avg));
}

void Display(Tennis **p)
{
	printf("%s %d %lf\n", p[0]->name, p[0]->grade,p[0]->avg);
	printf("%s %d %lf\n", p[1]->name, p[1]->grade, p[1]->avg);
	printf("%s %d %lf\n", p[2]->name, p[2]->grade, p[2]->avg);


}
*/