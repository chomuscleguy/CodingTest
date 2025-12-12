#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int availableOutlets = 1;
	while (N--)
	{
		int socket;
		cin >> socket;

		availableOutlets += socket - 1;
	}

	cout << availableOutlets << '\n';

	return 0;
}