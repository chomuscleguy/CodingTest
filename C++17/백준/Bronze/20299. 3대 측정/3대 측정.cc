#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K, L;
	cin >> N >> K >> L;

	vector<int> ans;
	ans.reserve(N * 3);

	while (N--)
	{
		int A, B, C;
		cin >> A >> B >> C;

		if (A >= L && B >= L && C >= L && (A + B + C >= K))
		{
			ans.push_back(A);
			ans.push_back(B);
			ans.push_back(C);
		}
	}

	cout << ans.size() / 3 << '\n';

	for (int n : ans)
		cout << n << ' ';

	return 0;
}