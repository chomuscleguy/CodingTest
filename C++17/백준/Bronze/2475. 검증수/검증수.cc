#include <iostream>

using namespace std;

int main()
{
    int a = 0, n;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        a += n * n; 
    }

    cout << a % 10 << endl;

    return 0;
}
