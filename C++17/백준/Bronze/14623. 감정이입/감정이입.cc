#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

unsigned long long binary(const string& str)
{
	unsigned long long btoi = 0;
	for (char c : str)
	{
		btoi <<= 1;
		if (c == '1')
			btoi += 1;
	}
	return btoi;
}

int main()
{
	string str;
	unsigned long long B[2], i = 0;

	while (i < 2 && cin >> str)
		B[i++] = binary(str);

	unsigned long long muti = B[0] * B[1];

	if (muti == 0)
	{
		cout << "0\n";
		return 0;
	}

	string result;

	while (muti != 0)
	{
		result += ('0' + (muti & 1));
		muti >>= 1;
	}

	reverse(result.begin(), result.end());

	cout << result << '\n';

	return 0;
}