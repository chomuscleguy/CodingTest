#include <iostream>

using namespace std;

int main()
{
	int A,B;
	cin >> A>>B;

	cout << (A > B ? 2 * B + 1 : 2 * A - 1);

	return 0;
}