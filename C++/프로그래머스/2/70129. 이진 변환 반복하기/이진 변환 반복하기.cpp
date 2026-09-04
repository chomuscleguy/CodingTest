#include <iostream>
#include <vector>

using namespace std;

struct TrialResult
{
	int totalTrials = 1;
	int delZero = 0;
};

int calc(TrialResult& res, int& n)
{
	if (n == 1)
		return n;

	int oneCnt = 0;
	int temp = n;

	while (temp > 0)
	{
		if (temp % 2)
			oneCnt++;
		else
			res.delZero++;

		temp /= 2;
	}

	res.totalTrials++;
	n = oneCnt;

	return calc(res, n);
}


vector<int> solution(string s)
{
	TrialResult answer;

	int zeroCnt = 0;
	int oneCnt = 0;

	for (char& c : s)
		c == '0' ? zeroCnt++ : oneCnt++;

	answer.delZero += zeroCnt;

	calc(answer, oneCnt);

	return { answer.totalTrials,answer.delZero };
}

int main()
{
	string s;
	cin >> s;

	vector<int> v = solution(s);

	cout << v[0] << ',' << v[1] << '\n';

	return 0;
}