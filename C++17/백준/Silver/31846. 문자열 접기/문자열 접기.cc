#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string S;
    cin >> S;

    int Q;
    cin >> Q;

    while (Q--) 
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int ans = 0;

        for (int i = l; i < r; i++) 
        {
            int left = i;
            int right = i + 1;
            int cnt = 0;

            while (left >= l && right <= r)
            {
                if (S[left] == S[right])
                    cnt++;

                left--;
                right++;
            }

            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }

    return 0;
}