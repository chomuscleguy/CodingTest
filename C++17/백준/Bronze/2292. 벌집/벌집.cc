#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int x = 1;
	int count = 1;

	while (x < N)
	{
		x += 6 * count;
		count++;
	}

	cout << count;

	return 0;
}
