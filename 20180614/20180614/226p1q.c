/*
#include<stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title();
int main()
{
	int arr[3];
	int i;

	for (i = 0; i < 3; i++) 
	{
		scanf("%d", &arr[i]);
	}
	int tot = total(arr[0], arr[1], arr[2]);
	print_title();

	printf("    %d %d %d %d %.1lf",arr[0],arr[1],arr[2], tot, average(tot));

}

int total(int kor, int eng, int mat) 
{

	return kor + eng + mat;
}

double average(int tot)
{

	return tot / 3;
}
void print_title()
{
	printf("	 ======< 성적표 >======\n");
	printf("    국어 영어 수학 총점 평균\n");
	printf("	 ======================\n");
}

*/