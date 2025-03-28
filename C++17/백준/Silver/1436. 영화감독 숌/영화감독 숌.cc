#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int result = n == 0 ? 0 : 666;
	int count = 0;

	while (count < n)
	{
		if (to_string(result).find("666") != string::npos)
			count++;
		if (count < n)
			result++;
	}

	cout << result;

	return 0;
}
