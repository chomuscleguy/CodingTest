#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cout << string(n - i - 1, ' ');
        cout << string(i + 1, '*');
        cout << "\n";
    }

    return 0;
}
