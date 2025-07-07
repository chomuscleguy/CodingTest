#include <iostream>

using namespace std;

int A, B, C, D;

int main()
{
	cin >> A >> B >> C >> D;

	A += D / 3600;
	D %= 3600;

	B += D / 60;
	D %= 60;

	C += D;

	if (C >= 60)
	{
		B += C / 60;
		C %= 60;
	}
	if (B >= 60)
	{
		A += B / 60;
		B %= 60;
	}
	if (A >= 24)
		A %= 24;

	cout << A << ' ' << B << ' ' << C << '\n';
}
