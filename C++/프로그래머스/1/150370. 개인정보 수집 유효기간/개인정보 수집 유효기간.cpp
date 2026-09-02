#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

struct MonthDay
{
	int mon;
	int day;
};

MonthDay convertDate(const string& s)
{
	int year = stoi(s.substr(0, 4));
	int mon = stoi(s.substr(5, 2));
	int day = stoi(s.substr(8, 2));

	return { year * 12 + mon, day };
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
	MonthDay todayDate = convertDate(today);

	unordered_map<char, int> um;

	for (const string& s : terms)
	{
		stringstream ss(s);
		char type;
		int month;
		ss >> type >> month;
		um[type] = month;
	}

	vector<int> answer;

	for (int i = 0;i < privacies.size();i++)
	{
		MonthDay acquisitionDate = convertDate(privacies[i].substr(0, 10));

		acquisitionDate.mon += um[privacies[i].back()];

		if (todayDate.mon > acquisitionDate.mon)
			answer.push_back(i + 1);
		else if (todayDate.mon == acquisitionDate.mon && todayDate.day >= acquisitionDate.day)
			answer.push_back(i + 1);
	}

	return answer;
}

int main()
{
	string today;
	cin >> today;

	int n;
	cin >> n;
	cin.ignore();

	vector<string> terms(n);
	for (int i = 0; i < n; i++)
		getline(cin, terms[i]);

	int m;
	cin >> m;
	cin.ignore();

	vector<string> privacies(m);
	for (int i = 0; i < m; i++)
		getline(cin, privacies[i]);

	vector<int> res = solution(today, terms, privacies);

	for (int i : res)
		cout << i << ' ';

	cout << '\n';

	return 0;
}