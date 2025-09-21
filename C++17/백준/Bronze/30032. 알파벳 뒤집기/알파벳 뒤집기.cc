#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char alph[2][2] = { {'d','b'}, {'q','p'} };
    int N, D;
    cin >> N >> D;

    unordered_map<char, pair<int, int>> mp =
    {
        {'d', {0,0}},
        {'b', {0,1}},
        {'q', {1,0}},
        {'p', {1,1}}
    };

    for (int i = 0; i < N; i++) 
    {
        string res = "";

        for (int j = 0; j < N; j++)
        {
            char input;
            cin >> input;

            int row = mp[input].first;
            int col = mp[input].second;

            if (D == 1)
                row++;
            else 
                col++;

            res += alph[row % 2][col % 2];
        }
        cout << res << '\n';
    }

    return 0;
}