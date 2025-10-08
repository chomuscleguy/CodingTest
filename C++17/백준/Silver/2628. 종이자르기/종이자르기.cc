#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int y, x;
	cin >> y >> x;

	int n;
	cin >> n;

	vector<int> row = { 0 }, col = { 0 };

	while (n--)
	{
		int cmd, value;
		cin >> cmd >> value;

		if (cmd)
			row.push_back(value);
		else
			col.push_back(value);
	}

	row.push_back(y);
	col.push_back(x);

	sort(row.begin(), row.end());
	sort(col.begin(), col.end());

	int maxH = 0, maxW = 0;

	for (int i = 1; i < row.size(); i++)
		maxH = max(maxH, row[i] - row[i - 1]);

	for (int i = 1; i < col.size(); i++)
		maxW = max(maxW, col[i] - col[i - 1]);

	cout << maxH * maxW << '\n';

	return 0;
}