#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int parseTime(const string& s)
{
	size_t p1 = s.find(':');
	size_t p2 = s.find(':', p1 + 1);

	int m = stoi(s.substr(0, p1));
	int sec = stoi(s.substr(p1 + 1, p2 - p1 - 1));
	int ms = stoi(s.substr(p2 + 1));

	return (m * 60 + sec) * 1000 + ms;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int, char>> rank(8);
	int B = 0, R = 0;

	for (int i = 0; i < 8;i++)
	{
		string time;
		char team;
		cin >> time >> team;

		rank[i] = { parseTime(time),team };
	}

	sort(rank.begin(), rank.end());

	int score[8] = { 10,8,6,5,4,3,2,1 };

	for (int i = 0; i < 8;i++)
	{
		if (rank[i].second == 'R')
			R += score[i];
		else
			B += score[i];
	}

	cout << (R > B ? "Red" : "Blue") << '\n';

	return 0;
}