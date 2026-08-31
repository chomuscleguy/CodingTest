#include <iostream>
#include <string>

using namespace std;

int solution(string s) 
{
    int answer = 0;

    int countX = 0;
    int countOther = 0;
    char X = s[0];

    for (int i = 0; i < s.length(); i++) 
    {
        if (countX == 0 && countOther == 0) 
            X = s[i];

        if (s[i] == X)
            countX++;
        else
            countOther++;

        if (countX == countOther) 
        {
            answer++;
            countX = 0;
            countOther = 0;
        }
    }

    if (countX != 0 || countOther != 0)
        answer++;

    return answer;
}

int main()
{
	string s;
	cin >> s;

	cout << solution(s) << '\n';

	return 0;
}

