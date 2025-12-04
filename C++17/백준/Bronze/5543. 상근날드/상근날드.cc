#include <iostream>

using namespace std;

int getMinPrice(int count)
{
	int res = 0x7FFFFFFF;

	while (count--)
	{
		int price;
		cin >> price;

		res = min(res, price);
	}

	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int hambugi = getMinPrice(3);
	int drink = getMinPrice(2);
	int discount = 50;

	cout << hambugi + drink - discount << '\n';

	return 0;
}