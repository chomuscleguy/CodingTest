#include <iostream>

using namespace std;

int main()
{
    bool ran[10000];
	int N;

    while (cin >> N && N != 0)
    {
        fill(begin(ran), end(ran), false);

        int res = 0, num = N;

        while (!ran[num])
        {
            ran[num] = true;
            res++;

            num = (num * num / 100) % 10000;
        }

        cout << res << '\n';
    }

	return 0;
}