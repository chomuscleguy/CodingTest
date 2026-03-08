#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> card = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	for (int i = 0;i < 10;i++)
	{
		int l, r;
		cin >> l >> r;

		while (l < r)
		{
			swap(card[l - 1], card[r - 1]);
			l++;
			r--;
		}
	}

	for (int n : card)
		cout << n << ' ';

	cout << '\n';

	return 0;
}