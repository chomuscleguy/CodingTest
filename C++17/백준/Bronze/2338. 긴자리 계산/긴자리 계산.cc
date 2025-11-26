#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct number
{
	bool sign = true;
	string nums;
};

string trimZero(const string& s)
{
	int i = 0;
	while (i < s.size() && s[i] == '0')
		i++;

	string res = s.substr(i);

	return res.empty() ? "0" : res;
}

bool compare(const string& a, const string& b)
{
	if (a.size() != b.size())
		return a.size() > b.size();
	return a >= b;
}

string addAbs(const string& A, const string& B)
{
	int len = max(A.size(), B.size());
	int carry = 0;
	string res;

	for (int i = 0; i < len; i++)
	{
		int ai = (i < A.size() ? A[A.size() - 1 - i] - '0' : 0);
		int bi = (i < B.size() ? B[B.size() - 1 - i] - '0' : 0);

		int calc = ai + bi + carry;
		carry = calc / 10;

		res += (calc % 10) + '0';
	}

	if (carry)
		res += carry + '0';

	reverse(res.begin(), res.end());

	return trimZero(res);
}

string subAbs(const string& A, const string& B)
{
	int borrow = 0;
	string res;

	for (int i = 0; i < A.size(); i++)
	{
		int ai = A[A.size() - 1 - i] - '0';
		int bi = (i < B.size() ? B[B.size() - 1 - i] - '0' : 0);

		int calc = ai - bi - borrow;
		if (calc < 0)
		{
			calc += 10;
			borrow = 1;
		}
		else
			borrow = 0;

		res += calc + '0';
	}

	reverse(res.begin(), res.end());

	return trimZero(res);
}

string mulAbs(const string& A, const string& B)
{
	vector<int> v(A.size() + B.size(), 0);

	for (int i = A.size() - 1; i >= 0; i--)
	{
		for (int j = B.size() - 1; j >= 0; j--)
		{
			int ai = A[i] - '0';
			int bi = B[j] - '0';

			v[(A.size() - 1 - i) + (B.size() - 1 - j)] += ai * bi;
		}
	}

	int carry = 0;
	for (int i = 0; i < v.size(); i++)
	{
		int calc = v[i] + carry;
		v[i] = calc % 10;
		carry = calc / 10;
	}

	while (carry)
	{
		v.push_back(carry % 10);
		carry /= 10;
	}

	while (v.size() > 1 && v.back() == 0)
		v.pop_back();

	string res;
	for (int i = v.size() - 1; i >= 0; i--)
		res += v[i] + '0';

	return trimZero(res);
}

string add(number a, number b)
{
	if (a.sign == b.sign)
	{
		string sum = addAbs(a.nums, b.nums);
		if (!a.sign && sum != "0")
			return "-" + sum;
		return sum;
	}

	if (compare(a.nums, b.nums))
	{
		string diff = subAbs(a.nums, b.nums);
		if (!a.sign && diff != "0")
			return "-" + diff;
		return diff;
	}
	else
	{
		string diff = subAbs(b.nums, a.nums);
		if (!b.sign && diff != "0")
			return "-" + diff;
		return diff;
	}
}

string subtract(number a, number b)
{
	b.sign = !b.sign;
	return add(a, b);
}

string multiply(number a, number b)
{
	string res = mulAbs(a.nums, b.nums);

	if (res == "0")
		return "0";

	bool signResult = (a.sign == b.sign);

	return signResult ? res : "-" + res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	number N[2];

	for (int i = 0; i < 2; i++)
	{
		string tmp;
		cin >> tmp;

		if (tmp[0] == '-')
		{
			N[i].sign = false;
			N[i].nums = trimZero(tmp.substr(1));
		}
		else
			N[i].nums = trimZero(tmp);
	}

	cout << add(N[0], N[1]) << '\n' << subtract(N[0], N[1]) << '\n' << multiply(N[0], N[1]);

	return 0;
}