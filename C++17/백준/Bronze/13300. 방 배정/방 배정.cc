#include <iostream>
#include <vector>

using namespace std;

struct Gender
{
	int32_t MALE = 0;
	int32_t FEMALE = 0;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int32_t N, K;
	cin >> N >> K;

	int32_t res = 0;
	vector<Gender> grade(6);

	while (N--)
	{
		int32_t S, Y;
		cin >> S >> Y;

		if (S == 0)
			grade[Y - 1].FEMALE++;
		else
			grade[Y - 1].MALE++;
	}

	for (auto& a : grade)
	{
		res += (a.MALE + K - 1) / K;
		res += (a.FEMALE + K - 1) / K;
	}

	cout << res << '\n';

	return 0;
}