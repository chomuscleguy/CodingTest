#include <iostream>
#include <unordered_map>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> dict;
    dict.reserve(n);

    while (n--)
    {
        string key, value;
        cin >> key >> value;
        dict[key] = value;
    }

    while (m--)
    {
        string query;
        cin >> query;
        cout << dict[query] << '\n';
    }

    return 0;
}
