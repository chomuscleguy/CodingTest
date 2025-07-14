#include <iostream>

using namespace std;

int main()
{
	long long R, C, N;
	cin >> R >> C >> N;

	long long row = (R + N - 1) / N;
	long long col = (C + N - 1) / N;

	cout << row * col << '\n';

	return 0;
}
