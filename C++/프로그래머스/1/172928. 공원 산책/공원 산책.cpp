#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes)
{
	vector<int> answer;
	int vert = park.size();
	int hori = park[0].size();

	for (int y = 0; y < vert; y++)
	{
		for (int x = 0; x < hori; x++)
		{
			if (park[y][x] == 'S')
			{
				answer.push_back(y);
				answer.push_back(x);
				break;
			}
		}
		if (answer.size() == 2) break;
	}

	for (string& str : routes)
	{
		char direction = str.front();
		int move = str.back() - '0';

		if (direction == 'S')
		{
			if (answer[0] + move < vert)
			{
				bool canMove = true;
				for (int i = answer[0] + 1; i <= answer[0] + move; ++i)
					if (park[i][answer[1]] == 'X')
					{
						canMove = false;
						break;
					}
				if (canMove)
					answer[0] += move;
			}
		}
		else if (direction == 'E')
		{
			if (answer[1] + move < hori)
			{
				bool canMove = true;
				for (int i = answer[1] + 1; i <= answer[1] + move; ++i)
					if (park[answer[0]][i] == 'X')
					{
						canMove = false;
						break;
					}
				if (canMove)
					answer[1] += move;
			}
		}
		else if (direction == 'W')
		{
			if (answer[1] - move >= 0)
			{
				bool canMove = true;
				for (int i = answer[1] - 1; i >= answer[1] - move; --i)
					if (park[answer[0]][i] == 'X')
					{
						canMove = false;
						break;
					}
				if (canMove)
					answer[1] -= move;
			}
		}
		else if (direction == 'N')
		{
			if (answer[0] - move >= 0)
			{
				bool canMove = true;
				for (int i = answer[0] - 1; i >= answer[0] - move; --i)
					if (park[i][answer[1]] == 'X')
					{
						canMove = false;
						break;
					}
				if (canMove) answer[0] -= move;
			}
		}
	}
	return answer;
}
