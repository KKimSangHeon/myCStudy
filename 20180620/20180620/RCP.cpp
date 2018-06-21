#include<stdio.h>
#include<map>
#include<iostream>
/* [Notice for C/C++]
* - 기본 제공되는 뼈대 코드는 입출력의 이해를 돕기위해 제공되었습니다.
* - 뼈대코드의 활용은 선택사항이며 코드를 직접 작성하여도 무관합니다.
*
* - 별도의 병렬 처리나 시스템콜, 네트워크/파일접근 등을 하지 마세요
* - main은 int형으로 선언한 후 return 0를 항상 하는 것을 권유합니다
* - 지역변수 배열 크기에 의한 Stack Overflow 에러에 주의하세요
* - (C++) cin/cout보다 scanf/printf를 사용하기를 권장합니다. (입출력 성능에 의한 이유)
*/
static const int SCISSOR = 1;
static const int ROCK = 2;
static const int PAPER = 3;
using namespace std;
int main()
{   //프로그램의 시작부 
	int player[5];
	int winner = 0; //이 변수에 승리하는 사람의 수를 저장한다
	int i;

	map<int, int> results;

	int rockCounter = 0, scissorCounter = 0, paperCounter = 0;
	
	for (i = 0; i < 5; i++) {
		scanf("%d", &player[i]);

		if (player[i] == ROCK)
			rockCounter++;
		else if (player[i] == SCISSOR)
			scissorCounter++;
		else
			paperCounter++;
	}

	if(rockCounter != 0)
		results.insert(make_pair(ROCK, rockCounter));

	if (scissorCounter != 0)
		results.insert(make_pair(SCISSOR, scissorCounter));

	if (paperCounter != 0)
		results.insert(make_pair(PAPER, paperCounter));

	if (results.size() == 3 || results.size() == 1) {
		printf("%d", winner);
		return 0;
	}
	

	map<int, int>::iterator it1 = results.begin();	
	map<int, int>::iterator it2 = ++(results.begin());


	if (it1->first == 1 )
	{
		if(it2->first == 3)
			winner =  it1->second;
		else
			winner =  it2->second;
	}
	else if (it1->first == 2)
	{
		if (it2->first == 1)
			winner = it1->second;
		else
			winner = it2->second;
	}
	else if (it1->first == 3)
	{
		if (it2->first == 2)
			winner = it1->second;
		else
			winner = it2->second;
	}
	//답을 출력한다 
	printf("%d", winner);
	return 0;
}
