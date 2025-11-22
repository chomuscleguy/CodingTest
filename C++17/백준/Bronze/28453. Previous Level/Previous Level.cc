#include <iostream>

using namespace std;

int previousLevel(int n)
{
	if (n >= 300)
		return 1;
	else if (n >= 275)
		return 2;
	else if(n>=250)
		return 3;

	return 4;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	while (N--)
	{
		int level;
		cin >> level;

		cout << previousLevel(level) << ' ';
	}

	cout << '\n';
	
	return 0;
}