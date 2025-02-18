#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
	for (int i = 0, j = 0; i < myString.size(); i++)
	{
		if (tolower(myString[i]) == tolower(pat[j]))
			j++;
		else
			j = 0;

		if (pat.size() == j)
			return 1;
	}

	return 0;
}
