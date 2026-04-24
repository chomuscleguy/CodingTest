#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	char star[] = { '*',' ' };

	for (int i = 0;i < N * 2;i++)
	{
		for (int j = 0;j < N;j++)
			cout << star[(i + j) % 2];

		cout << '\n';
	}

	return 0;
}