#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long K;
bool done = false;

int partition(vector<int>& A, int p, int r) 
{
    int x = A[r];
    int i = p - 1;

    for (int j = p; j <= r - 1; j++) 
    {
        if (A[j] <= x) 
        {
            ++i;
            swap(A[i], A[j]);
            K--;

            if (!K) 
            {
                for (int n : A)
                    cout << n << ' ';

                done = true;

                return i;
            }
        }
    }

    if (i + 1 != r) 
    {
        swap(A[i + 1], A[r]);
        K--;

        if (!K) 
        {
            for (int n : A)
                cout << n << ' ';
            done = true;
        }
    }

    return i + 1;
}

void quick_sort(vector<int>& A, int p, int r)
{
    if (p >= r || done)
        return;

    int q = partition(A, p, r);

    quick_sort(A, p, q - 1);
    quick_sort(A, q + 1, r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    quick_sort(A, 0, N - 1);

    if (!done)
        cout << -1;

    return 0;
}