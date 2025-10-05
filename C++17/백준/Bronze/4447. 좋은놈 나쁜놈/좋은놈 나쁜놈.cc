#include <iostream>
#include <string>

using namespace std;

struct cnt
{
	int g = 0;
	int b = 0;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string identity[3] = { "GOOD", "A BADDY", "NEUTRAL" };

	int N;
	cin >> N;
	cin.ignore();

	while (N--)
	{
		cnt c;
		string name;
		getline(cin, name);

		for (char ch : name)
		{
			ch = tolower(ch);
			if (ch == 'g')
				c.g++;
			if (ch == 'b')
				c.b++;
		}

		int n = 2;

		if (c.g != c.b)
			n = (c.g > c.b ? 0 : 1);

		cout << name << " is " << identity[n] << '\n';
	}

	return 0;
}