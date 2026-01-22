#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int number[10] = {};
		string str = "";

		for (int i = 1; i <= 9; i++)
			cin >> number[i];

		number[9] += number[6];
		number[6] = 0;

		for (int i = 9; i >= 1; i--)
			while (number[i]--)
				str += '0' + i;

		int last = str.size();
		int start = (last & 1) ? last - 2 : last - 1;

		for (int i = 0; i < last; i += 2)
			cout << str[i] << ' ';
		for (int i = start; i > 0; i -= 2)
			cout << str[i] << ' ';

		cout << '\n';
	}

	return 0;
}