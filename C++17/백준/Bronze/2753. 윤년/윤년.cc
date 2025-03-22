#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    bool isLeapYear = (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);

    printf("%d",isLeapYear);

    return 0;
}
