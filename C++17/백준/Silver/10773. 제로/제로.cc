#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> v;
	int sum = 0;

	while (N--)
	{
		int num;
		cin >> num;

		if (num != 0)
		{
			v.push_back(num);
			sum += num;
		}
		else if (!v.empty())
		{
			sum -= v.back();
			v.pop_back();
		}
	}

	cout << sum;

	return 0;
}
