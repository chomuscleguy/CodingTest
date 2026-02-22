#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	const int OFFSET = 10000000;
	vector<bool> card(20000001);

	int N;
	cin >> N;
	while (N--)
	{
		int num;
		cin >> num;

		card[num + OFFSET] = true;
	}

	int M;
	cin >> M;
	while (M--)
	{
		int num;
		cin >> num;

		cout << card[num + OFFSET] << ' ';
	}

	cout << '\n';

	return 0;
}