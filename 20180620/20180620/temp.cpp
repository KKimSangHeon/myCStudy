/*#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	int num;
	bool dupChecker = false;
	vector<int> list;

	for (int i = 0; i < 10; i++)
	{
		dupChecker = false;
		cin >> num;
		num = num % 42;
		for (unsigned int j = 0; j < list.size(); j++) 
		{
			if (num == list[j])
			{
				dupChecker = true;
				break;
			}
		}
		if (dupChecker == false) 
		{
			list.push_back(num);
		}
	}

	cout << list.size();
}*/