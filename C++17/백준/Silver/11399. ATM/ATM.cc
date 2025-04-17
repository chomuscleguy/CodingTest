#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) 
        cin >> v[i];

    sort(v.begin(), v.end());

    int sum = 0;
    int result = 0;

    for (int num : v) 
    {
        sum = (sum + num);
        result += sum;
    }

    cout << result << "\n";

    return 0;
}
