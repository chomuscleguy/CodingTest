#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string add(const string& A, const string& B)
{
	int i = A.size() - 1, j = B.size() - 1;
	bool carry = false;
	string res;
	res.reserve(max(A.size(), B.size()) + 1);

	while (i >= 0 || j >= 0 || carry)
	{
		int digitA = (i >= 0) ? (A[i--] - '0') : 0;
		int digitB = (j >= 0) ? (B[j--] - '0') : 0;
		int tmp = digitA + digitB + (carry ? 1 : 0);

		carry = (tmp >= 10);
		if (carry)
			tmp -= 10;

		res.push_back(tmp + '0');
	}

	while (res.size() > 1 && res.back() == '0')
		res.pop_back();

	reverse(res.begin(), res.end());

	return res;
}

string sub(const string& A, const string& B)
{
	int i = A.size() - 1, j = B.size() - 1;
	bool borrow = false;
	string res;
	res.reserve(A.size());

	while (i >= 0)
	{
		int digitA = A[i--] - '0';
		int digitB = (j >= 0) ? (B[j--] - '0') : 0;

		int tmp = digitA - digitB - (borrow ? 1 : 0);

		borrow = (tmp < 0);
		if (borrow)
			tmp += 10;

		res.push_back(tmp + '0');
	}

	while (res.size() > 1 && res.back() == '0')
		res.pop_back();

	reverse(res.begin(), res.end());

	return res;
}

bool compare(const string& A, const string& B)
{
	if (A.size() != B.size())
		return A.size() > B.size();

	for (size_t i = 0; i < A.size(); i++)
		if (A[i] != B[i])
			return A[i] > B[i];

	return true;
}

string calc(string& A, string& B)
{
	bool negA = (A[0] == '-'), negB = (B[0] == '-');

	if (negA)
		A = A.substr(1);
	if (negB)
		B = B.substr(1);

	string res;

	if (negA == negB)
	{
		res = add(A, B);
		if (negA)
			res = "-" + res;
	}
	else
	{
		if (compare(A, B))
		{
			res = sub(A, B);
			if (res == "0")
				return res;
			else if (negA)
				res = "-" + res;
		}
		else
		{
			res = sub(B, A);
			if (res == "0")
				return res;
			else if (negB)
				res = "-" + res;
		}
	}

	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string A, B;
	cin >> A >> B;

	cout << calc(A, B) << '\n';

	return 0;
}