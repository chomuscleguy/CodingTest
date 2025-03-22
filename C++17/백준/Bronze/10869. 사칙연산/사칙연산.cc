#include <iostream>

using namespace std;

int main()
{
    int n[2];

    for (int i = 0; i < 2; i++)
        cin >> n[i];

    cout << n[0] + n[1] << endl;
    cout << n[0] - n[1] << endl;
    cout << n[0] * n[1] << endl;
    cout << n[0] / n[1] << endl;
    cout << n[0] % n[1] << endl;

    return 0;
}
