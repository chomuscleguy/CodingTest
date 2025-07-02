#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

vector<int> nums;
vector<int> seq;
vector<bool> used;

void dfs(int start) 
{
    if (start == M)
    {
        for (int x : seq)
            cout << x << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < N; i++) 
    {
        if (!used[i]) 
        {
            used[i] = true;
            seq.push_back(nums[i]);
            dfs(start + 1);
            seq.pop_back();
            used[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;
    nums.resize(N);
    used.resize(N);

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    dfs(0);

    return 0;
}
