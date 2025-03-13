#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(vector<string> babbling) 
{
    int answer = 0;

    regex validPattern("^(aya|ye|woo|ma)*$");
    regex invalidRepeat("ayaaya|yeye|woowoo|mama");

    for (string& word : babbling) 
    {
        if (regex_search(word, invalidRepeat)) 
            continue;

        if (regex_match(word, validPattern))
            answer++;
    }

    return answer;
}
