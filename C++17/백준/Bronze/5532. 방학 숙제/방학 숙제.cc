#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	cout << L - max((B + D - 1) / D, (A + C - 1) / C);

	return 0;
}
