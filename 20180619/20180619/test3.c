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
	// �� 5�� ������ ���� �� ���� �ϵ��� ����
	char ** namePointer = (char**)malloc(sizeof(char*)*MAX_PERSON);
	int callCounter = 0;

	int sel = 0;
	while (1)
	{
		printf("1.�Է�  2.���  3.���� \n");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:			
			if (callCounter<MAX_PERSON)
			{
				Input_Data(&namePointer[callCounter]);  // �޸� Ȯ���ϰ� ������ ����
				callCounter++;
			}
			else
			{
				printf("�����Ұ�\n");
			}
			break;
		case 2:
			Display_Data(namePointer, callCounter);  // �Է��� ��� ������ ���
			break;
		case 3:
			mem_del(namePointer, callCounter);  // �޸� ����
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
		printf("pointer ����\n");
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