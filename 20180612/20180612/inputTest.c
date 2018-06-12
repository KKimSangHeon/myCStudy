#include <stdio.h>

int main()
{
	int age = 0;
	int year;

	printf("홍길동");

	printf("나이:");
	scanf("%d", &age);

	printf("번:");
	scanf("%d", &year);

	printf("%d\n", age);
	printf("%d", year);

	printf("age address : 0x%p\n", &age);
	printf("year address : 0x%p\n", &year);
	return 0;
}
































