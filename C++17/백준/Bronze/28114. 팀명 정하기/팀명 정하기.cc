#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first > b.first;
}

int main() 
{
    vector<string> v(3);
    vector<pair<int,string>> p(3);

    for (int i = 0; i < 3; i++) 
        cin >> p[i].first >> v[i] >> p[i].second;

    sort(v.begin(), v.end());

    for (string s : v)
        cout << s.substr(2);

    cout << '\n';    

    sort(p.begin(), p.end(), compare);

    for (pair<int,string> v : p)
        cout << v.second[0];
    
    return 0;
}