#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {

	int num;
	int sum = 0;
	int inputNum;
	cin >> num;


	for (int i = 0; i < num; i++)
	{
		cin >> inputNum;
		sum += inputNum;

	}

	sum -= (num - 1);

	cout << sum;
}
