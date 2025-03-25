#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> input_set;

    for (int i = 0, input; i < 10; ++i)
    {
        cin >> input;
        input_set.insert(input % 42);
    }

    cout << input_set.size();
    return 0;
}
