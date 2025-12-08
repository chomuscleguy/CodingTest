#include <iostream>

using namespace std;

void PrimeFactorization(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        while (a % i == 0)
        {
            cout << i << '\n';
            a /= i;
        }
    }
    if (a > 1) 
        cout << a << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	PrimeFactorization(N);

	return 0;
}