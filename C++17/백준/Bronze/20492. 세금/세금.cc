#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	cout << N / 100 * 78 << ' ' << N / 1000 * 956 << '\n';

	return 0;
}