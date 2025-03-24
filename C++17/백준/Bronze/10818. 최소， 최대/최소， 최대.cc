#include <iostream>

using namespace std;

int main() 
{
	int n;
	int num;

	cin >> n;
	cin >> num;

	int min = num, max = num;

	while (--n)
	{
		cin >> num;
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}

	cout << min << " " << max;

	return 0;
}
