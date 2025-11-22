#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int vert = abs((A - 1) / 4 - (B - 1) / 4);
	int hori = abs((A - 1) % 4 - (B - 1) % 4);
	cout << vert + hori << '\n';

	return 0;
}