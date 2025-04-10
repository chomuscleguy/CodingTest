#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    vector<bool> isPrime(M + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= M; ++i) 
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= M; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = N; i <= M; ++i) 
    {
        if (isPrime[i]) 
        {
            cout << i << '\n';
        }
    }

    return 0;
}
