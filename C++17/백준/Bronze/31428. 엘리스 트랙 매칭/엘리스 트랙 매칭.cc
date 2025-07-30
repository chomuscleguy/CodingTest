#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int N;
	cin >> N;
	unordered_map<char, int> track;

	char ch;

	for (int i = 0; i < N; i++)
	{
		cin >> ch;
		track[ch]++;
	}

	cin >> ch;
	cout << track[ch] << '\n';

	return 0;
}