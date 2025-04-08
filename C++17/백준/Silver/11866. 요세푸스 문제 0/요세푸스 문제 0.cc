#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> Josephus;
    vector<int> result;

    for (int i = 1; i <= N; i++) 
        Josephus.push_back(i);

    int count = 0;

    while (!Josephus.empty()) 
    {
        count = (count + K - 1) % Josephus.size();
        result.push_back(Josephus[count]);
        Josephus.erase(Josephus.begin() + count);
    }

    cout << "<";
    for (int i = 0; i < result.size(); i++) 
    {
        cout << result[i];
        if (i != result.size() - 1)
            cout << ", ";
    }
    cout << ">" << endl;

    return 0;
}
