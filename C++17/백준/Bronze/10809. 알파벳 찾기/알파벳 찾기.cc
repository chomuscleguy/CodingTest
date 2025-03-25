#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr(26, -1);

    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        int index = input[i] - 'a';
        if (arr[index] == -1)
            arr[index] = i;
    }

    for (int n : arr)
        cout << n << endl;;

    return 0;
}
