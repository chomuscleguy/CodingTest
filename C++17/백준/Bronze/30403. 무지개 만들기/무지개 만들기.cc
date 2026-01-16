#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_map<char, int> idx =
	{
		{'R',0}, {'O',1}, {'Y',2}, {'G',3}, {'B',4}, {'I',5}, {'V',6},
		{'r',0}, {'o',1}, {'y',2}, {'g',3}, {'b',4}, {'i',5}, {'v',6}
	};

	int N;
	cin >> N;

	int upperMask = 0;
	int lowerMask = 0;
	int fullMask = 127;

	for (int i = 0; i < N; ++i)
	{
		char c;
		cin >> c;

		if (!idx.count(c))
			continue;

		if (isupper(c))
			upperMask |= 1 << idx[c];
		else
			lowerMask |= 1 << idx[c];
	}

	bool upperRaindow = upperMask == fullMask;
	bool lowerRaindow = lowerMask == fullMask;

	if (upperRaindow)
		if (lowerRaindow)
			cout << "YeS" << '\n';
		else
			cout << "YES" << '\n';
	else
		if (lowerRaindow)
			cout << "yes" << '\n';
		else
			cout << "NO!" << '\n';

	return 0;
}