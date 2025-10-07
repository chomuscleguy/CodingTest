#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string target = "SciComLove";
	string S;
	cin >> S;

	int diff = 0;

	for (int i = 0; i < target.size();i++)
		if (S[i] != target[i])
			diff++;

	cout << diff << '\n';

	return 0;
}