#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
	vector<int> answer(id_list.size(), 0);
	unordered_map<string, unordered_set<string>> report_map;
	unordered_map<string, int> reported_count;

	for (string str : report)
	{
		istringstream ss(str);
		string reporter, reported;
		ss >> reporter >> reported;

		report_map[reporter].insert(reported);
	}

	for (const auto& entry : report_map)
		for (const auto& reported : entry.second)
			reported_count[reported]++;

	for (int i = 0; i < id_list.size(); ++i)
	{
		string user = id_list[i];
		for (const auto& reported : report_map[user])
			if (reported_count[reported] >= k)
				answer[i]++;
	}

	return answer;
}