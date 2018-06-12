//2.  입력한 문자가 영문(대문자) 이면  영문(소문자)로 변환 해서 출력하고
//입력한 문자가 영문(소문자) 이면  영문(대문자)로 변환 해서 출력


#include<stdio.h>
int main()
{
	char input;

	scanf("%c", &input);

	if (input <= 90)
		input += 32;
	else
		input -= 32;

	printf("%c",input);

}
