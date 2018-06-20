/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	while (1)
	{
		printf("1.입력  2.출력  3.종료 \n");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			Input_Data();  // 메모리 확보하고 데이터 저장
			break;
		case 2:
			Display_Data();  // 입력한 모든 정보를 출력
			break;
		case 3:
			mem_del();  // 메모리 해제
			break;
		}
		if (sel == 3)
			break;
	}
	return 0;
}
*/