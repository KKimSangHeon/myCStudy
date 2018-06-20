
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

typedef struct person
{
	char name[30];
	int age;
	char job[30];
	struct person* next;
}PER;

void parsingCanvasSize(char * string);
int main() {
	char input[100];
	cin.getline(input, 100);
	printf("%s\n",input);
	
	parsingCanvasSize(input);


	return 0;
}

void parsingCanvasSize(char * str)
{
	char *name, *data, *width, *height;	
	int iWidth, iHeight;
	name = strtok(str, ":");
	data = strtok(NULL, "");


	width = strtok(data, "x");
	height = strtok(NULL, "x");


	printf("%d", atoi(width));
	printf("%d", atoi(height));
	//cout << data;
}
