#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int stick = 0;
	char pre = ' ';
	int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            stick++;
        }
        else
        {
            stick--;
            if (s[i - 1] == '(')   
                ans += stick;
            else                   
                ans++;
        }
    }

	cout << ans << '\n';

	return 0;
}