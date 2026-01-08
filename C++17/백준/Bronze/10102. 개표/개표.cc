#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int V, res = 0;
	string vote;
	cin >> V >> vote;

	for (int i = 0; i < V;i++)
		res += (vote[i] == 'A') * 2 - 1;

	if (res == 0)
		cout << "Tie" << '\n';
	else
		cout << (res > 0 ? 'A' : 'B') << '\n';

	return 0;
}