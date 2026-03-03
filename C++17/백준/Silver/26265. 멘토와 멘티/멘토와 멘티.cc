#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	map<string, vector<string>> m;

	while (N--)
	{
		string mentor, mentee;
		cin >> mentor >> mentee;

		m[mentor].push_back(mentee);
	}

	for (auto& [mentor, mentees] : m)
		sort(mentees.rbegin(), mentees.rend());

	for (auto& [mentor, mentees] : m)
		for (auto& m : mentees)
			cout << mentor << ' ' << m << '\n';

	return 0;
}