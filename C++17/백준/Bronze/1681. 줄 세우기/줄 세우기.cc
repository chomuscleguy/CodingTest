#include <iostream>

using namespace std;

int N, L, cnt = 0;

int calc(int n) 
{
    if (cnt == N) 
        return n - 1;

    int tmp = n;
    bool isPossible = true;

    if (tmp == 0 && L == 0) 
        isPossible = false;

    while (tmp > 0) 
    {
        if (tmp % 10 == L) 
        {
            isPossible = false;
            break;
        }

        tmp /= 10;
    }

    if (isPossible) 
        cnt++;

    return calc(n + 1);      
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N >> L;

    cout << calc(1) << '\n';

	return 0;
}