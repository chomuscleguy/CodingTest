#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


int solution(int k, vector<int> tangerine)
{
	unordered_map<int, int> um;

	for (int n : tangerine)
		um[n]++;

	vector<int> v;
	for (pair<int, int> p: um)
		v.push_back(p.second);

	sort(v.rbegin(), v.rend());

	int answer = 0;
	int sum = 0;

	for (int n : v)
	{
		sum += n;
		answer++;

		if (sum >= k)
			break;
	}

	return answer;
}

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> tangerine(n);

	for (int i = 0; i < n;i++)
		cin >> tangerine[i];

	cout << solution(k, tangerine) << '\n';

	return 0;
}