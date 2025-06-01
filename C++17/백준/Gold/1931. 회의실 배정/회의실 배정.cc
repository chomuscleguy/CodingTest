#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareFirst(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> schedule(N);

	for (int i = 0; i < N; i++)
		cin >> schedule[i].first >> schedule[i].second;

	sort(schedule.begin(), schedule.end(), compareFirst);

	int count = 0;
	int end = 0;

	for (int i = 0; i < N; i++)
	{
		if (schedule[i].first >= end) 
		{
			end = schedule[i].second;
			count++;
		}
	}

	cout << count << '\n';

	return 0;
}
