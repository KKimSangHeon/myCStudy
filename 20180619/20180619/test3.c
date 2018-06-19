/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSON 5
#define MAX_NAME 100
void Input_Data(char **pointer);
void Display_Data(char **namePointer, int callCounter);
void mem_del(char **namePointer, int callCounter);

int main(void)
{
	// 총 5명 까지만 저장 및 관리 하도록 구현
	char ** namePointer = (char**)malloc(sizeof(char*)*MAX_PERSON);
	int callCounter = 0;

	int sel = 0;
	while (1)
	{
		printf("1.입력  2.출력  3.종료 \n");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:			
			if (callCounter<MAX_PERSON)
			{
				Input_Data(&namePointer[callCounter]);  // 메모리 확보하고 데이터 저장
				callCounter++;
			}
			else
			{
				printf("생성불가\n");
			}
			break;
		case 2:
			Display_Data(namePointer, callCounter);  // 입력한 모든 정보를 출력
			break;
		case 3:
			mem_del(namePointer, callCounter);  // 메모리 해제
			callCounter = 0;
			break;
		}
		if (sel == 3)
			break;

	}
	return 0;
}
void Input_Data(char **pointer)
{
	char name[MAX_NAME];

	if (pointer == NULL)
	{
		printf("pointer 에러\n");
		return;
	}

	scanf("%s", name);
	
	*pointer = (char*)malloc(sizeof(char)*strlen(name)+1);
	strncpy(*pointer, name,strlen(name)+1);
}

void mem_del(char **namePointer, int callCounter)
{
	int i = 0;
	
	for (i = 0; i < callCounter; i++) 
	{
		free(namePointer[i]);
	}
}

void Display_Data(char **namePointer, int callCounter)
{
	int i = 0;
	for (i = 0; i < callCounter; i++)
	{
		printf("%s\n", namePointer[i]);	
	}
	
}

*/