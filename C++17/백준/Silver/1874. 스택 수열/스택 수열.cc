#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	int idx = 1;
	bool isPossible = true;
	vector<int>stack;
	vector<char>result;
	cin >> N;

	while (N--)
	{
		int n;
		cin >> n;

		while (idx <= n)
		{
			result.push_back('+');
			stack.push_back(idx);
			idx++;
		}

		if (stack.back() == n)
		{
			result.push_back('-');
			stack.pop_back();
		}
		else
			isPossible = false;
	}

	if (isPossible)
		for (char ch : result)
			cout << ch << "\n";
	else
		cout << "NO";


	return 0;
}
