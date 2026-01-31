#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int N;
		string S;
		cin >> N >> S;

		S.erase(N - 1, 1);

		cout << S << '\n';
	}

	return 0;
}