#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> tanghulu(n);

	for (int i = 0; i < n; ++i)
		cin >> tanghulu[i];

	int left = 0, answer = 0;
	unordered_map<int, int> count;

	for (int right = 0; right < n; ++right)
	{
		count[tanghulu[right]]++;

		while (count.size() > 2)
		{
			count[tanghulu[left]]--;

			if (count[tanghulu[left]] == 0)
				count.erase(tanghulu[left]);

			left++;
		}

		answer = max(answer, right - left + 1);
	}

	cout << answer << '\n';

	return 0;
}
