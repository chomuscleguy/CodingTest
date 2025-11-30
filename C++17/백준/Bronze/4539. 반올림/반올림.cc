#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int base = 10;

        while (x >= base)
        {
            x = (x + base / 2) / base * base;
            base *= 10;
        }

        cout << x << "\n";
    }
    return 0;
}