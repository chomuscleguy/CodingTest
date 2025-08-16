#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, k, s, e;
	cin >> N >> M;

	vector<int> classRoom(N + 1, -1);

	while (M--)
	{
		cin >> k >> s >> e;

		if (classRoom[k] <= s) 
		{
			cout << "YES" << '\n';
			classRoom[k] = e;
		}
		else 
			cout << "NO"<< '\n';
	}

	return 0;
}