#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choice)
{
	string answer = "";

	unordered_map<char, int> um;

	for (int i = 0; i < survey.size();i++)
	{
		int score = 4 - choice[i];

		if (score > 0)
			um[survey[i][0]] += score;
		else
			um[survey[i][1]] += (-score);
	}

	vector<string> indicator = { "RT","CF","JM","AN" };

	for (string s : indicator)
	{
		char type1 = s[0];
		char type2 = s[1];

		if (um[type1] >= um[type2])
			answer += type1;
		else
			answer += type2;
	}

	return answer;
}

int main()
{
	int n;
	cin >> n;

	vector<string> survey(n);
	vector<int> choices(n);

	for (int i = 0; i < n; i++)
		cin >> survey[i];

	for (int i = 0; i < n; i++)
		cin >> choices[i];

	cout << solution(survey, choices) << '\n';

	return 0;
}

