#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    unordered_map<string, int> indexMap;

    for (int i = 0; i < players.size(); ++i) 
        indexMap[players[i]] = i;

    for (string& name : callings) 
    {
        int idx = indexMap[name];

        if (idx > 0) 
        {
            swap(players[idx], players[idx - 1]);

            indexMap[players[idx]] = idx;
            indexMap[players[idx - 1]] = idx - 1;
        }
    }

    return players;
}
