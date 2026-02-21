#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string ans;
    cin >> ans;

    for (int i = 1; i < N; i++)
    {
        string cur;
        cin >> cur;

        for (int j = 0; j < ans.size(); j++)
        {
            if (ans[j] != cur[j])
                ans[j] = '?';
        }
    }

    cout << ans << '\n';

    return 0;
}