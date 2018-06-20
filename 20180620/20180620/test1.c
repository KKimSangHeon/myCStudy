/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
	int age;
	char *pName;

}PER;

typedef struct
{
	int idx;
	PER nop[30];

}Em_Class;

void InsertData(PER *data);
int main()
{
	Em_Class st;
	Em_Class* ptr = &st;

	PER per;
	InsertData(&per);
	printf("%s",per.pName);
}
void InsertData(PER *data)
{
	char name[100];
	scanf("%d",&(data->age));
	
	scanf("%s", name);

	data->pName = (char*)malloc(sizeof(char)*strlen(name)+1);
	strncpy(data->pName, name, strlen(name)+1);

}
*/