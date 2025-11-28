#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	cout << ((N > 0 && (N & (N - 1)) == 0) ? 1 : 0);

	return 0;
}