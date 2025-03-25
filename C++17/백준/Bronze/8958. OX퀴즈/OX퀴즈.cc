#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> results(n);

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;

        int score = 0, total = 0;
        for (char ch : input)
        {
            score = (ch == 'O') ? score + 1 : 0;
            total += score;
        }
        results[i] = total;
    }

    for (int result : results)
        cout << result << endl;

    return 0;
}
