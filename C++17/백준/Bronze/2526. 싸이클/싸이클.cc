#include <iostream>

using namespace std;

int N, P;
int order[1000000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N >> P;

	int cur = N;
	int step = 1;

	while (order[cur] == 0)
	{
		order[cur] = step++;
		cur = (cur * N) % P;
	}

	int cycle = step - order[cur];
    cout << cycle << '\n';

	return 0;
}