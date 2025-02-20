#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat)
{
	int n = myString.rfind(pat);
	return myString.substr(0, n + pat.size());
}
