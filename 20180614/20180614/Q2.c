#include <stdio.h>

int main(void)
{
	char Src[20] = "abcde";
	char Dest[20];
	int i = 0;


	// Src �迭�� ������ ���� �̸��� �Է� 
	printf("My Name Input : ");

	// �Է� �ڵ� �߰�
	scanf("%s",Src);

	// �Է¹��� ������ ���� �̸��� ���

	printf("Src string : %s\n", Src);


	// Src �迭�� ���� �̸���  Dest �迭�� �����ϴ� �ڵ� �߰�
	while (Src[i] != '\0') 
	{
		Dest[i] = Src[i];
		i++;
	}

	Dest[i] = Src[i];

	printf("Dest string : %s\n", Dest);

	return 0;
}