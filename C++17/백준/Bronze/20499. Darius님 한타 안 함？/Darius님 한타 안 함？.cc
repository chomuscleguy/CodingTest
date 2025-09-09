#include <iostream>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int k, d, a, i = 0;
	int kda[3] = { 0,0,0 };

	for (char c : str)
	{
		if (c == '/')
			i++;
		else
			kda[i] = kda[i] * 10 + c - '0';
	}

	if (kda[1] == 0 || (kda[0] + kda[2]) / kda[1] == 0)
		cout << "hasu" << '\n';
	else
		cout << "gosu" << '\n';

	return 0;
}