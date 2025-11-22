#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, string> um
{
    {"social",   "digital humanities"},
    {"history",  "digital humanities"},
    {"language", "digital humanities"},
    {"literacy", "digital humanities"},

    {"bigdata",  "public bigdata"},
    {"public",   "public bigdata"},
    {"society",  "public bigdata"}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    for (char& c : line)
        c = tolower(c);

    for (auto& p : um)
    {
        if (line.find(p.first) != string::npos)
        {
            cout << p.second;
            return 0;
        }
    }

    return 0;
}
