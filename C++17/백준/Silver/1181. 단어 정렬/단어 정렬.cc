#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string input;
    map<int, set<string>> input_map;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        input_map[input.size()].insert(input);
    }

    for (auto& pair : input_map)
        for (const string& str : pair.second)
            cout << str << endl;

    return 0;
}
