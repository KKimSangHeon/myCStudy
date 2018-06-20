/*
#include <iostream>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

//Implement this class
//Please use stack only
class Queue {
private:
	stack<int> numStack;
	stack<int> tempStack;
	stack<int> reversedStack;
public:

	void enqueue(int v) {
		numStack.push(v);
		tempStack = numStack;

		while (reversedStack.size() != 0)
		{
			reversedStack.pop();
		}

		while (tempStack.size() != 0) 
		{
			reversedStack.push(tempStack.top());
			tempStack.pop();
		}

	}


	int dequeue() {
		int num = reversedStack.top();
		reversedStack.pop();

		tempStack = reversedStack;
		

		while (numStack.size() != 0)
		{
			numStack.pop();
		}

		while (tempStack.size() != 0)
		{
			numStack.push(tempStack.top());
			tempStack.pop();
		}

		return num;
	}
};

int main(int argc, const char *argv[]) {
	Queue queue;
	string line;
	getline(cin, line);
	int count = stoi(line);
	for (int i = 0; i < count; ++i) {
		getline(cin, line);
		stringstream ss(line);
		string token;
		getline(ss, token, ' ');
		if (token == "ENQUEUE") {
			getline(ss, token, ' ');
			queue.enqueue(stoi(token));
		}
		else if (token == "DEQUEUE") {
			cout << queue.dequeue() << endl;
		}
	}
}
*/