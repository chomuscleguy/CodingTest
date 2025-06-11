#include <iostream>

using namespace std;

int main()
{
	int N, M;

	while (true)
	{
		cin >> N >> M;

		if (!N && !M)
			break;

		cout << (N > M ? "Yes" : "No") << '\n';
	}

	return 0;
}