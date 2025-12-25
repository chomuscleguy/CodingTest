#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	while (N--)
	{
		string K;
		cin >> K;

		cout << ((K.back() - '0') % 2 ? "odd" : "even") << '\n';
	}

	return 0;
}