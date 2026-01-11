#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    unordered_set<string> dancing;
    dancing.insert("ChongChong");

    while (N--)
    {
        string A, B;
        cin >> A >> B;

        if (dancing.count(A) || dancing.count(B))
        {
            dancing.insert(A);
            dancing.insert(B);
        }
    }

    cout << dancing.size() << '\n';
    
    return 0;
}