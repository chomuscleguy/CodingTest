#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, ToBeUse = 0;
	cin >> N;
	while (N--)
	{
		string giftiCon;
		cin >> giftiCon;

		int num = stoi(giftiCon.substr(2));

		if (num <= 90)
			ToBeUse++;
	}

	cout << ToBeUse << '\n';

	return 0;
}