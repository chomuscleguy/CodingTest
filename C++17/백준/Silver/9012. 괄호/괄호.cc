#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;

    cin >> n;

    while (n--)
    {
        cin >> str;
        int balance = 0;
        bool isValid = true;

        for (char ch : str)
        {
            if (ch == '(')
                balance++;
            else if (ch == ')')
                balance--;

            if (balance < 0)
            {
                isValid = false;
                break;
            }
        }

        if (isValid && balance == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
