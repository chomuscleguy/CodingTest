#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	cout << (int)max((double)A * B / C, (double)A / B * C);

	return 0;
}