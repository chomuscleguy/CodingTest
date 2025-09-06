#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	string str[2], input;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < N; j++)
		{
			cin >> input;
			str[i] += input;
		}

	if (str[0].size() == str[1].size())
		cout << ((str[0] < str[1]) ? str[0] : str[1]) << '\n';
	else
		cout << ((str[0].size() <= str[1].size()) ? str[0] : str[1]) << '\n';

	return 0;
}