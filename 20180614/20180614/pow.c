#include<stdio.h>
int pow(int num1, int num2);
int main()
{
	int num, multi;
	int result = 0;

	printf("�Է� ���� ����(num)�� �Է� ���� ������(multi) ��ŭ �����Ͽ� ����ϴ� ���α׷�\n\n");
	printf("����� ����(num) �Է� : ");
	scanf("%d", &num);
	printf("����� ������(multi) �Է� : ");
	scanf("%d", &multi);

	// �Լ� ȣ��


	printf("\n%d�� %d ������ ����� %d�Դϴ�.\n", num, multi, pow(num, multi));

	return 0;
}
int pow(int num1, int num2)
{
	int i = 0;
	int result = 1;
	for (i=0;i<num2;i++)
	{
		result *= num1;
	}
	return result;

}