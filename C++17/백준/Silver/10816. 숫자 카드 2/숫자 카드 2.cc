#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() 
{
    unordered_map<int, int> frequency_map;

    int N, M;
    cin >> N;

    while (N--) 
    {
        int num;
        cin >> num;
        frequency_map[num]++;
    }

    cin >> M;
    vector<int> v;

    while (M--) 
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int n : v) 
    {
        if (frequency_map.find(n) != frequency_map.end()) 
            cout << frequency_map[n] << " ";
        else 
            cout << "0 ";
    }

    return 0;
}
