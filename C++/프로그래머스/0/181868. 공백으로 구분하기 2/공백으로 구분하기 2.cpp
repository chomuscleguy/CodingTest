#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string)
{
	vector<string> answer;
	istringstream stream(my_string);

	for (string s; stream >> s;)
		answer.push_back(s);

	return answer;
}