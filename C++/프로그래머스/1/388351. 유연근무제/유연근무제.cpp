#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday)
{
	int answer = 0;

	for (int i = 0; i < schedules.size(); i++)
	{
		bool isBool = true;

		for (int j = 0; j < timelogs[0].size(); j++)
		{
			if ((startday + j) % 7 == 6 || (startday + j) % 7 == 0)
				continue;

			int limitTime = schedules[i] + 10;
			if (limitTime % 100 >= 60)
				limitTime += 40;

			if (timelogs[i][j] > limitTime)
			{
				isBool = false;
				break;
			}
		}
		if (isBool)
			answer++;
	}

	return answer;
}