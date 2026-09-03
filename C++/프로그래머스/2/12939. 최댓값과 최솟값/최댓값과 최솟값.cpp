#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string solution(string s)
{
	stringstream ss(s);
	int num;
	int min_val = 0x7FFFFFFF;
	int max_val = 0x80000000;

	while (ss >> num)
	{
		min_val = min(min_val, num);
		max_val = max(max_val, num);
	}

	return to_string(min_val) + " " + to_string(max_val);
}

int main()
{
	string s;
	getline(cin, s);

	cout << solution(s) << '\n';

	return 0;
}