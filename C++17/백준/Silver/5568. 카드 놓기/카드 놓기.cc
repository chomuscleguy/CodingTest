#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int n, k;

vector<string> cards;
vector<bool> visited;

unordered_set<string> result;

void dfs(string& cur, int cnt)
{
	if (cnt == k)
	{
		result.insert(cur);

		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (visited[i]) 
			continue;

		visited[i] = true;

		int len = cur.size();         
		cur += cards[i];              
		dfs(cur, cnt + 1);
		cur.resize(len);              

		visited[i] = false;
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> k;

	cards.resize(n);
	visited.resize(n);

	for (int i = 0; i < n; i++)
		cin >> cards[i];

	string cur = "";
	dfs(cur, 0);

	cout << result.size() << '\n';

	return 0;
}