#include <iostream>

using namespace std;

int CalcPriceFromWeight(int baseGram, int weight, int unitPrice)
{
	return (weight * unitPrice) / baseGram;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int X, Y, Z;
	cin >> X >> Y >> Z;

	int U, V, W;
	cin >> U >> V >> W;

	int totalPrice = 0;
	totalPrice += CalcPriceFromWeight(100, X, U);
	totalPrice += CalcPriceFromWeight(50, Y, V);
	totalPrice += CalcPriceFromWeight(20, Z, W);

	cout << totalPrice << '\n';

	return 0;
}