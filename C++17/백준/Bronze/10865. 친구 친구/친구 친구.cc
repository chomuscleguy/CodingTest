#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int* arr = new int[N]();

	while (M--)
	{
		int A, B;
		cin >> A >> B;

		arr[A - 1]++;
		arr[B - 1]++;
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << '\n';

	delete[] arr;

	return 0;
}