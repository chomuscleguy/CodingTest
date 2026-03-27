#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = -1;

    for (int i = n / 5; i >= 0; i--)
    {
        int rem = n - 5 * i;

        if (rem % 2 == 0)
        {
            ans = i + rem / 2;
            break;
        }
    }

    cout << ans;
}