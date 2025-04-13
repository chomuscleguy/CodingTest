#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> v(N);
    map<int, int> map;
    int sum = 0;

    for (int i = 0; i < N; ++i) 
    {
        cin >> v[i];
        sum += v[i];
        map[v[i]]++;
    }

    sort(v.begin(), v.end());

    int avg = round((double)sum / N);
    cout << avg << '\n';

    cout << v[N / 2] << '\n';

    int maxMap = 0;

    for (auto& p : map)
        if (p.second > maxMap) maxMap = p.second;

    vector<int> modes;
    for (auto& p : map)
        if (p.second == maxMap) modes.push_back(p.first);

    if (modes.size() > 1)
        cout << modes[1] << '\n';
    else
        cout << modes[0] << '\n';

    cout << v[N - 1] - v[0] << '\n';

    return 0;
}
