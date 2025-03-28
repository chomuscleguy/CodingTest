#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<int> v(30, 0);
    int n;

    for (int i = 0; i < 28; ++i) 
    {
        cin >> n;
        v[n - 1] = 1;
    }

    for (int i = 0; i < 30; ++i) 
        if (v[i] == 0) 
            cout << i + 1 << "\n";

    return 0;
}
