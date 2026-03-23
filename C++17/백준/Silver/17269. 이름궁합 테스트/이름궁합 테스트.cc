#include <iostream>
#include <vector>

using namespace std;

constexpr int strokes[26] = { 3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	string A, B;
	cin >> N >> M >> A >> B;

	vector<int> v;
	v.reserve(N + M);

	for (int i = 0; i < max(N, M); i++)
	{
		if (i < N)
			v.push_back(strokes[A[i] - 'A']);
		if (i < M)
			v.push_back(strokes[B[i] - 'A']);
	}

	int len = v.size();

	while (len > 2)
	{
		for (int i = 0; i < len - 1; i++)
			v[i] = (v[i] + v[i + 1]) % 10;

		len--;
	}

	cout << v[0] * 10 + v[1] << '%' << '\n';

	return 0;
}