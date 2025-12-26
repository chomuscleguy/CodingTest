#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    long long multi = 1LL * A * B * C;
    int number[10] = {};

    while (multi > 0)
    {
        number[multi % 10]++;
        multi /= 10;
    }

    for (int i = 0; i < 10; i++)
        cout << number[i] << '\n';

    return 0;
}