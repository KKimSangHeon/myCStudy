/*
#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
typedef struct person
{
	char name[30];
	int age;
	char job[30];
	struct person* next;
}PER;
void parsingCanvasSize(char * str);
void parsingBGColor(char * str);
int parsingFrame(char * str);
void parsingMeta(char * str);
int main() {
	char input[100];

	cin.getline(input, 100);
	parsingCanvasSize(input);

	cin.getline(input, 100);
	parsingBGColor(input);
	int frames;
	cin.getline(input, 100);
	frames = parsingFrame(input);
	cin.getline(input, 100);
	for (int i = 0; i < frames; i++)
	{
		cin.getline(input, 100);
		parsingMeta(input);
	}
	return 0;
}
void parsingCanvasSize(char * str)
{
	char *data, *width, *height;
	int iWidth, iHeight;
	data = strtok(str, ":");
	data = strtok(NULL, ":");
	width = strtok(data, "x");
	height = strtok(NULL, "x");
	cout << atoi(width) << "\n";
	cout << atoi(height) << "\n";
}
void parsingBGColor(char * str)
{
	string line = str;
	string data = line.substr(line.find("0x") + 2, line.length() - 1);
	unsigned int iHex;
	std::stringstream ss;
	ss << std::hex << data.data();
	ss >> iHex;

	cout << iHex << "\n";
}
int parsingFrame(char * str)
{
	int frames;
	string line = str;
	string data = line.substr(line.find(":") + 1, line.length() - 1);
	frames = atoi(data.data());
	cout << frames << "\n";
	return frames;
}
void parsingMeta(char * str)
{
	string line = str;
	string sData = line.substr(line.find(":") + 1, line.length() - 1);
	char *width, *height, *alpha, *duration;
	char cData[100];
	strcpy(cData, sData.data());
	width = strtok(cData, " ");
	height = strtok(NULL, " ");
	alpha = strtok(NULL, " ");
	duration = strtok(NULL, " ");
	int alphaChecker;
	if (strcmp(alpha, "yes") == 0)
	{
		alphaChecker = 1;
	}
	else
	{
		alphaChecker = 0;
	}
	cout << width << "x" << height << ", " << duration << ", " << alphaChecker << "\n";
}
*/