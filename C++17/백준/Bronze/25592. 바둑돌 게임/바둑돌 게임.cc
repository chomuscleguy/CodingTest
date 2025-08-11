#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 1;
    while (N >= cnt)
    {
        N -= cnt;
        cnt++;
    }

    cout << (cnt % 2 ? cnt - N : 0);
}