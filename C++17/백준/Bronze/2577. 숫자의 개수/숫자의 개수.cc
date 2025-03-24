#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A, B, C, count[10] = { 0 };

    cin >> A >> B >> C;

    int result = A * B * C;

    while (result > 0)
    {
        count[result % 10]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++)
        cout << count[i] << endl;

    return 0;
}
