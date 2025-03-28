#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x, y, n;
	cin >> x >> y;

	vector<vector<int>> matrix(x, vector<int>(y, 0));

	for (vector<int>& v : matrix)
	{
		for (int& i : v)
		{
			cin >> n;
			i = n;
		}
	}

	for (vector<int>& v : matrix)
	{
		for (int& i : v)
		{
			cin >> n;
			i += n;
		}
	}

	for (vector<int> v : matrix)
	{
		for (int i : v)
			cout << i << " ";
		cout << "\n";
	}

	return 0;
}
