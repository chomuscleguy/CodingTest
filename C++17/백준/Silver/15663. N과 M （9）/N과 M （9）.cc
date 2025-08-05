#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

vector<int>nums;
vector<int> seq;
vector<bool> visited;

void dfs(int depth)
{
	if (depth == M)
	{
		for (int x : seq)
			cout << x << ' ';
		cout << '\n';
		return;
	}

	int before = -1;

	for (int i = 0; i < N; i++)
	{
		if (visited[i]) 
			continue;
		if (before == nums[i]) 
			continue;

		before = nums[i];
		visited[i] = true;
		seq.push_back(nums[i]);

		dfs(depth + 1);

		seq.pop_back();
		visited[i] = false;
	}
}

int main()
{
	cin >> N >> M;
	nums.resize(N);
	visited.resize(N);

	for (int i = 0; i < N; i++)
		cin >> nums[i];

	sort(nums.begin(), nums.end());

	dfs(0);

	return 0;
}