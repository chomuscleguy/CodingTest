#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string stripLeadingZeros(const string& s)
{
	int i = 0;
	while (i + 1 < s.size() && s[i] == '0')
		i++;
	return s.substr(i);
}

int compareStr(const string& a, const string& b)
{
	string A = stripLeadingZeros(a);
	string B = stripLeadingZeros(b);
	if (A.size() != B.size())
		return (A.size() > B.size()) ? 1 : -1;
	if (A == B)
		return 0;
	return (A > B) ? 1 : -1;
}

string subtractStr(string a, string b)
{
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string res;
	int carry = 0;
	for (int i = 0; i < a.size(); i++)
	{
		int x = a[i] - '0' - carry;
		int y = (i < b.size()) ? b[i] - '0' : 0;
		if (x < y)
		{
			x += 10;
			carry = 1;
		}
		else
			carry = 0;
		res.push_back((x - y) + '0');
	}
	while (res.size() > 1 && res.back() == '0')
		res.pop_back();
	reverse(res.begin(), res.end());

	return stripLeadingZeros(res);
}

int main()
{
	string n, m;
	cin >> n >> m;

	if (compareStr(n, m) < 0)
	{
		cout << 0 << "\n" << n << "\n";
		return 0;
	}

	int diff = (int)n.size() - (int)m.size();
	vector<int> quotient(diff + 1, 0);

	string current = n.substr(0, m.size());
	int pos = 0;

	for (int i = m.size(); i <= (int)n.size(); i++)
	{
		while (compareStr(current, m) >= 0)
		{
			current = subtractStr(current, m);
			quotient[pos]++;
		}

		if (i < (int)n.size())
		{
			if (current == "0") current.clear();
			current.push_back(n[i]);
			current = stripLeadingZeros(current);
		}

		pos++;
	}

	string q;
	bool leading = true;
	for (int v : quotient)
	{
		if (leading && v == 0)
			continue;
		leading = false;
		q.push_back('0' + v);
	}
	if (q.empty()) q = "0";

	if (current.empty()) current = "0";

	cout << q << "\n" << current << "\n";
	return 0;
}