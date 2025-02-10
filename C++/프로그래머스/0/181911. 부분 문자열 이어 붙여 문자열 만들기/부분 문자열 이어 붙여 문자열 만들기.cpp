#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
	string answer = "";
	for (int i = 0; i < my_strings.size(); ++i) {
		vector<int>& part = parts[i];

		answer += my_strings[i].substr(part[0], part[1] - part[0] + 1);
	}
	return answer;
}