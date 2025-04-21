#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;
		map<string, int> map;

		while (n--)
		{
			string A, B;
			cin >> A >> B;

			map[B]++;
		}

		int result = 1;
		for (auto& p : map)
			result *= (p.second + 1);

		cout << result - 1 << "\n";
	}

	return 0;
}
