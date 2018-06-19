
/*
#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;
int Calc(string str);

int main() 
{
	Calc("qw12qwe13");

}

int Calc(string str) 
{
	unsigned int result = 0;
	vector<int> numList;

	string sNum = "";
	int num;

	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i])) 
		{
			sNum += str[i];
			continue;
		}

		if(sNum.compare("") != 0)
		{
			num = atoi(sNum.data());
			numList.push_back(num);
			sNum = "";
		}		
		

	}

	if (sNum.compare("") != 0)
	{
		num = atoi(sNum.data());
		numList.push_back(num);
		sNum = "";
	}
	
	for (std::vector<int>::iterator it = numList.begin(); it != numList.end(); ++it)
		std::cout << ' ' << *it;

	return 1;
}

*/