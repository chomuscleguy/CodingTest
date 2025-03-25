#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int count = 0;

	while (N--)
	{
		int input;
		cin >> input;

		if (input > 1)
		{
			bool isPrime = true;
			int i;
			for (i = 2; i <= sqrt(input); i++)
				if (input % i == 0)
				{
					isPrime = false;
					break;
				}

			if (isPrime)
				count++;
		}
	}

	cout << count;

	return 0;
}
