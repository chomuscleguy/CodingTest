#include <iostream>
#include <vector>

using namespace std;

int award(vector<int>& v)
{
    for (int i = 1; i <= 6; i++)
    {
        if (v[i] == 4) 
            return 50000 + i * 5000;
        if (v[i] == 3) 
            return 10000 + i * 1000;
    }

    int firstPair = 0, secondPair = 0;

    for (int i = 1; i <= 6; i++)
    {
        if (v[i] == 2)
        {
            if (firstPair == 0) 
                firstPair = i;
            else secondPair = i;
        }
    }

    if (firstPair && secondPair)
        return 2000 + firstPair * 500 + secondPair * 500;
    if (firstPair) 
        return 1000 + firstPair * 100;

    for (int i = 6; i >= 1; i--)
        if (v[i] == 1)
            return i * 100;

    return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	int max = 0;


	while (N--)
	{
		vector<int> dice(7);
		int num;

		for (int i = 0; i < 4; i++)
		{
			cin >> num;
			dice[num]++;
		}

		int tmp = award(dice);
		max = tmp > max ? tmp : max;
	}

	cout << max << '\n';

	return 0;
}