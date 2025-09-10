#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int N;
    cin >> N;
    vector<int> frenchFries(N);

    for (int i = 0; i < N; i++)
        cin >> frenchFries[i];

    sort(frenchFries.begin(), frenchFries.end());

    long long res[2] = {0, 0};

    for (int i = 0; i < N / 2; i++)
    {
        res[0] += frenchFries[i];
        res[1] += frenchFries[N - 1 - i];
    }

    if (N % 2)
        res[1] += frenchFries[N / 2];

    cout << res[0] << ' ' << res[1] << '\n';

    return 0;
}