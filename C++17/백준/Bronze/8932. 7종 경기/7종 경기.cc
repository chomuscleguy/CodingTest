#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;

	double A[7] = { 9.23076,1.84523, 56.0211,4.99087,0.188807,15.9803,0.11193 };
	double B[7] = { 26.7,75.0,1.5,42.5,210.0,3.8,254.0 };
	double C[7] = { 1.835,1.348,1.05,1.81,1.41,1.04,1.88 };
	bool isTrack[7] = { true, false, false, true, false, false, true };

	while (N--)
	{
		int P;
		double sum = 0;
		for (int i = 0; i < 7; i++)
		{
			cin >> P;
			if (isTrack[i])
				sum += floor(A[i] * pow(B[i] - P, C[i]));
			else
				sum += floor(A[i] * pow(P - B[i], C[i]));

		}

		cout << sum << '\n';
	}

	return 0;
}