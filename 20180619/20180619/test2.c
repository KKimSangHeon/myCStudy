/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* Input();
void Display(char* pD);

int main(void)
{
	// 메인함수에는 배열 선언 금지.
	char *pD = Input();   //  영문 이름을  입력 저장.
	Display(pD);  // 입력 받은 영문 이름을 출력
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