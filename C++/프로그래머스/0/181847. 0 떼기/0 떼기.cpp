#include <string>
#include <vector>

using namespace std;

string solution(string n_str)
{
	while (n_str[0] == '0')
		n_str.erase(0, 1);
	return n_str;
}