#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> seq;

void dfs(int start)
{
    if (seq.size() == M) 
    {
        for (int x : seq) 
            cout << x << ' ';
        cout << '\n';
        return;
    }
    for (int i = start; i <= N; ++i) 
    {
        seq.push_back(i);
        dfs(i);
        seq.pop_back();
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    dfs(1);

    return 0;
}
