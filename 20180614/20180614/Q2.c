#include <stdio.h>

int main(void)
{
	char Src[20] = "abcde";
	char Dest[20];
	int i;


	// Src �迭�� ������ ���� �̸��� �Է� 
	printf("My Name Input : ");

	// �Է� �ڵ� �߰�
	scanf("%s",Src);

	// �Է¹��� ������ ���� �̸��� ���

	printf("Src string : %s\n", Src);


	// Src �迭�� ���� �̸���  Dest �迭�� �����ϴ� �ڵ� �߰�
	for (i = 0; i < 20; i++)
		Dest[i] = Src[i];

	printf("Dest string : %s\n", Dest);

	return 0;
}