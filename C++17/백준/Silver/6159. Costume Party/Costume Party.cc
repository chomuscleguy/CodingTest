#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,S;
    cin >> N >> S;

    vector<int> cow(N);

    for (int i = 0; i < N; i++)
        cin >> cow[i];

    sort(cow.begin(), cow.end());

    long long ans = 0;
    int left = 0;
    int right = N - 1;

    while (left < right)
    {
        if (cow[left] + cow[right] <= S)
        {
            ans += (right - left);
            left++;
        }
        else
            right--;
    }

    cout << ans << '\n';

    return 0;
}