
#include <iostream>       // std::cout
#include <string>         // std::string


using namespace std;

/*
* Complete the timeConversion function below.
*/
string timeConversion(string s) {

	string hour = s.substr(0, 2);
	int iHour = atoi(hour.data());
	size_t found = s.find("PM");
	if (found != std::string::npos)
	{
		iHour += 12;
		hour = to_string(iHour);
		for (int i = 0; i<hour.length(); i++)
		{
			s[i] = hour[i];

		}
	}
	return s;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}
