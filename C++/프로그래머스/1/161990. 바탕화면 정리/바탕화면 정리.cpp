#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
	int rows = wallpaper.size();
	int cols = wallpaper[0].size();

	int lux = rows, luy = cols, rdx = 0, rdy = 0;

	for (int r = 0;r < rows;r++)
	{
		for (int c = 0;c < cols;c++)
		{
			if (wallpaper[r][c] != '#')
				continue;

			lux = min(lux, r);
			luy = min(luy, c);
			rdx = max(rdx, r + 1);
			rdy = max(rdy, c + 1);
		}
	}

	return { lux, luy, rdx, rdy };
}

int main()
{
	int n;
	cin >> n;

	vector<string> wallpapaer(n);

	for (int i = 0;i < n;i++)
		cin >> wallpapaer[i];

	vector<int> res = solution(wallpapaer);

	for (int i : res)
		cout << i << ' ';

	cout << '\n';

	return 0;
}