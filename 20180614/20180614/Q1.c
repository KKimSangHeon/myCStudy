#include <stdio.h>

int main(void)
{

	int arrval[3] = { 3, 6, 9 };
	int buf[3] = { 0 };
	int idx;



	/* arrval  �迭 ������ buf�迭�� �����ϴ� �ڵ� �߰�  */

	for (idx = 0; idx < 3; idx++)
		buf[idx] = arrval[idx];

	for (idx = 0; idx < 3; idx++)
		printf("buf[%d] : %d\n", idx, buf[idx]);



	return 0;
}