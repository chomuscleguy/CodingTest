#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

string solution(string s, string skip, int index)
{
	unordered_set<char> skipSet(skip.begin(), skip.end());
	string answer = "";

	for (char ch : s)
	{
		int moveCount = 0;
		char newChar = ch;

		while (moveCount < index)
		{
			newChar++;
			if (newChar > 'z')
				newChar = 'a';
			if (skipSet.find(newChar) == skipSet.end())
				moveCount++;
		}

		answer += newChar;
	}

	return answer;
}
