#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> target)
{
	vector<int> answer;

	int cost[26] = { 0 };

	for (string& s : keymap)
	{
		for (int i = 0;i < s.size();i++)
		{
			int idx = s[i] - 'A';
			int press = i + 1;

			cost[idx] = cost[idx] == 0 ? press : min(cost[idx], press);
		}
	}

	for (string s : target)
	{
		int sum = 0;
		int possible = 0;

		for (char c : s)
		{
			int idx = c - 'A';

			if (cost[idx])
			{
				sum += cost[idx];
				continue;
			}

			possible = 1;
			break;
		}

		if (possible)
			sum = -1;

		answer.push_back(sum);
	}

	return answer;
}

int main()
{
	vector<string> keymap;
	vector<string> targets;
	string input;

	while (getline(cin, input) && !input.empty())
		keymap.push_back(input);

	while (getline(cin, input) && !input.empty())
		targets.push_back(input);

	vector<int> result = solution(keymap, targets);

	for (int ans : result)
		cout << ans << " ";

	cout << "\n";

	return 0;
}

