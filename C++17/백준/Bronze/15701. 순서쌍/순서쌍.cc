#include <iostream>

using namespace std;

int main()
{
	long long N;
	cin >> N;

	long long pair = 0;

	for (int i = 1; i * i <= N; i++)
	{
		if (N % i == 0)
			if (i * i == N)
				pair += 1;
			else
				pair += 2;
	}

	cout << pair << "\n";

	return 0;
}