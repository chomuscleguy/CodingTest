#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> trees(N);
    int maxHeight = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> trees[i];
        maxHeight = max(trees[i], maxHeight);
    }

    int low = 0, high = maxHeight;
    int result = 0;

    while (low <= high)
    {
        long long mid = (low + high) / 2;   
        long long sum = 0;

        for (int n : trees)
            if (n > mid)
                sum += (n - mid);

        if (sum >= M)
        {
            result = mid; 
            low = mid + 1; 
        }
        else
            high = mid - 1;
    }

    cout << result << "\n";

    return 0;
}
