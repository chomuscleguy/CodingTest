#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

    int c = (N + 1) / 2;

    cout << c << ' ';

    int l = c - 1;
    int r = c + 1;

    while (l >= 1 || r <= N)
    {
        if (r <= N) 
            cout << r++ << ' ';
        if (l >= 1) 
            cout << l-- << ' ';
    }

    return 0;
}