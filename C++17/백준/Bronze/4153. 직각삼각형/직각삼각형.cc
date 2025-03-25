#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> results;
	int a, b, c;

	while (cin >> a >> b >> c, a || b || c)
	{
		int max_num = max({ a, b, c });
		results.push_back(((a * a + b * b + c * c - max_num * max_num == max_num * max_num) ? "right" : "wrong"));
	}

	for (string result : results)
		cout << result << endl;

	return 0;
}
