#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> num(5);

	for (int i = 0; i < 5; i++)
		cin >> num[i];

	string result = "0";

	for (int i = 0; i < 5; i++)
	{
		string a = result;
		string b = num[i];
		string temp = "";
		int carry = 0;

		if (a.size() < b.size())
			swap(a, b);

		while (a.size() > b.size())
			b = '0' + b;

		for (int j = a.size() - 1; j >= 0; j--)
		{
			int sum = (a[j] - '0') + (b[j] - '0') + carry;
			carry = sum / 10;
			temp += (sum % 10 + '0');
		}

		if (carry)
			temp += (carry + '0');

		reverse(temp.begin(), temp.end());
		result = temp;
	}

	cout << result << endl;

	return 0;
}
