#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;

    vector<long long> v(K);
    for (int i = 0; i < K; i++)
        cin >> v[i];

    long long left = 1;
    long long right = *max_element(v.begin(), v.end());
    long long result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;
        for (int n : v)
            sum += n / mid;

        if (sum >= N)
        {
            result = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    cout << result << '\n';
    return 0;
}
