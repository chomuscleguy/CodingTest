#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N % 2 == 0)
	{
		cout << "I LOVE CBNU" << '\n';
		return 0;
	}

	for (int i = 0; i < N; i++)
		cout << '*';
	cout << '\n';

	for (int ii = 0; ii <= N / 2; ii++)
	{
		for (int iii = 0; iii < N / 2 - ii; iii++)
			cout << ' ';

		if (ii == 0)
			cout << '*';
		else
		{
			cout << '*';
			for (int iv = 0; iv < ii * 2 - 1; iv++)
				cout << ' ';
			cout << '*';
		}

		cout << '\n';
	}

	return 0;
}