#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N, X, Y;

    for (int i = 0; i < 4; i++) 
    {
        cin >> N;
        if (i < 2)
            X += N;
        else
            Y += N;
    }

    string res = "";
    int carry = 0;

    int n = X.size();
    int m = Y.size();
    int length = max(n, m);

    for (int i = 0; i < length; i++) 
    {
        int a = (i < n) ? (X[n - 1 - i] - '0') : 0;
        int b = (i < m) ? (Y[m - 1 - i] - '0') : 0;

        int sum = a + b + carry;
        carry = sum / 10;
        res = to_string(sum % 10) + res;
    }

    if (carry) 
        res = to_string(carry) + res;

    cout << res << '\n';

    return 0;
}
