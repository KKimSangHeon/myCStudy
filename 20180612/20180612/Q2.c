//2.  �Է��� ���ڰ� ����(�빮��) �̸�  ����(�ҹ���)�� ��ȯ �ؼ� ����ϰ�
//�Է��� ���ڰ� ����(�ҹ���) �̸�  ����(�빮��)�� ��ȯ �ؼ� ���


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
