#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    int result;

    if (X > 0)
        result = (Y > 0) ? 1 : 4;
    else
        result = (Y > 0) ? 2 : 3;

    cout << result;

    return 0;
}
