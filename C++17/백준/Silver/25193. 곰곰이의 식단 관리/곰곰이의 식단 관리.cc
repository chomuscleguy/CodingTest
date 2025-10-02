#include <iostream>

using namespace std;

struct food
{
	int chicken;
	int others;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	food f = { 0, 0 };

	while (N--)
	{
		char c;
		cin >> c;

		if (c == 'C')
			f.chicken++;
		else
			f.others++;
	}

	cout << (f.chicken + f.others) / (f.others + 1) << '\n';

	return 0;
}