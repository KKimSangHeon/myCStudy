#include<stdio.h>
#include<map>
#include<iostream>
/* [Notice for C/C++]
* - �⺻ �����Ǵ� ���� �ڵ�� ������� ���ظ� �������� �����Ǿ����ϴ�.
* - �����ڵ��� Ȱ���� ���û����̸� �ڵ带 ���� �ۼ��Ͽ��� �����մϴ�.
*
* - ������ ���� ó���� �ý�����, ��Ʈ��ũ/�������� ���� ���� ������
* - main�� int������ ������ �� return 0�� �׻� �ϴ� ���� �����մϴ�
* - �������� �迭 ũ�⿡ ���� Stack Overflow ������ �����ϼ���
* - (C++) cin/cout���� scanf/printf�� ����ϱ⸦ �����մϴ�. (����� ���ɿ� ���� ����)
*/
static const int SCISSOR = 1;
static const int ROCK = 2;
static const int PAPER = 3;
using namespace std;
int main()
{   //���α׷��� ���ۺ� 
	int player[5];
	int winner = 0; //�� ������ �¸��ϴ� ����� ���� �����Ѵ�
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
	//���� ����Ѵ� 
	printf("%d", winner);
	return 0;
}
