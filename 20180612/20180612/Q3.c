/*
3.  �� ������ �Է� �޾� ���� ¦���̰� 3�� ����� ���� ��� �մϴ�.
�ƴϸ� �ƴմϴ�.
������ �μ��� ���� ���
*/

#include<stdio.h>
int main()
{
	int input1 = 0, input2 = 0;
	int sum = 0;

	scanf("%d", &input1);
	scanf("%d", &input2);

	sum = input1 + input2;

	if (sum % 2 == 0 && sum % 3 == 0) 
	{
		printf("%d �½��ϴ�\n", sum);
	}
	else
	{
		printf("�ƴմϴ�\n");
	}

}