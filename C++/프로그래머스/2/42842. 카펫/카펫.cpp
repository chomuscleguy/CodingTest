#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow)
{
	double S = (brown + 4) / 2.0;
	double P = brown + yellow;

	double sqrtD = sqrt(S * S - 4 * P);

	int W = (int)((S + sqrtD) / 2);
	int H = (int)((S - sqrtD) / 2);

	return { W,H };
}

int main()
{
	int brown, yellow;
	cin >> brown >> yellow;

	for (int n : solution(brown, yellow))
		cout << n << ' ';
	cout << '\n';

	return 0;
}