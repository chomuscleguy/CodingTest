#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string A, B, result;

int main()
{
	cin >> A >> B;

	A.size() > B.size() ? B.insert(0, A.size() - B.size(), '0') : A.insert(0, B.size() - A.size(), '0');

	int carry = 0;

	for (int i = A.size() - 1; i >= 0; i--)
	{
		int sum = (A[i] - '0') + (B[i] - '0') + carry;
		result += (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry)
		result += carry + '0';

	reverse(result.begin(), result.end());
	cout << result << '\n';

	return 0;
}
