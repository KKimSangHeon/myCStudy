/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* Input();
void Display(char* pD);

int main(void)
{
	// �����Լ����� �迭 ���� ����.
	char *pD = Input();   //  ���� �̸���  �Է� ����.
	Display(pD);  // �Է� ���� ���� �̸��� ���
	return 0;
}
void Display(char* pD)
{
	printf("%s\n",pD);
	free(pD);
}

char* Input()
{
	char* pD = (char*)malloc(sizeof(char) * 100);
	scanf("%s",pD);
	return pD;
}

*/