#include <stdio.h>

int main(void)
{
	char Src[20] = "abcde";
	char Dest[20];
	int i = 0;


	// Src 배열에 본인의 영문 이름을 입력 
	printf("My Name Input : ");

	// 입력 코드 추가
	scanf("%s",Src);

	// 입력받은 본인의 영문 이름을 출력

	printf("Src string : %s\n", Src);


	// Src 배열의 영문 이름을  Dest 배열에 복사하는 코드 추가
	while (Src[i] != '\0') 
	{
		Dest[i] = Src[i];
		i++;
	}

	Dest[i] = Src[i];

	printf("Dest string : %s\n", Dest);

	return 0;
}