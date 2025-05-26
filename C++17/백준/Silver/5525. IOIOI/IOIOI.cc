#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;

    string S;
    cin >> S;

    int result = 0;
    int count = 0;

    for (int i = 1; i < M - 1; ) 
    {
        if (S[i - 1] == 'I' && S[i] == 'O' && S[i + 1] == 'I') 
        {
            count++;
            if (count == N) 
            {
                result++;
                count--;
            }
            i += 2;
        }
        else 
        {
            count = 0;
            i++;
        }
    }

    cout << result << '\n';
    return 0;
}
