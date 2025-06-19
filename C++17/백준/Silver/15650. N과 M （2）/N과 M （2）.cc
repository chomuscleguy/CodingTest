#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> arr;
    int pos = 1;

    while (true)
    {
        if (arr.size() == M)
        {
            for (int v : arr)
                cout << v << ' ';
            cout << '\n';

            pos = arr.back() + 1;
            arr.pop_back();
        }
        else if (pos > N)
        {
            if (arr.size() == 0)
                break;
            pos = arr.back() + 1;
            arr.pop_back();
        }
        else
            arr.push_back(pos++);
    }

    return 0;
}