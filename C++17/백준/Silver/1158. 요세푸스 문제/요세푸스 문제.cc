#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	cin >> N >> K;

	cout << '<';

	queue<int>q;

	for (int i = 1;i <= N;i++)
		q.push(i);

	while (!q.empty())
	{
		int cnt = K - 1;

		for (int i = 0; i < K - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}

		cout << q.front();

		if (q.size() != 1)
			cout << ", ";

		q.pop();
	}

	cout << '>';

	return 0;
}