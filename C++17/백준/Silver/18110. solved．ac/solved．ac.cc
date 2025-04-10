#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> scores(n);

    for (int i = 0; i < n; i++)
        cin >> scores[i];

    int removeCount = (n * 15) / 100;

    if ((n * 15) % 100 >= 50)
        removeCount++;

    sort(scores.begin(), scores.end());

    scores.erase(scores.begin(), scores.begin() + removeCount);
    scores.erase(scores.end() - removeCount, scores.end());

    if (scores.empty()) 
    {
        cout << 0 << endl;
        return 0;
    }

    int sum = 0;

    for (int score : scores)
        sum += score;

    int average = sum / scores.size();
    int remainder = (sum * 10 / scores.size()) % 10;

    if (remainder >= 5)
        average++;

    cout << average << endl;

    return 0;
}