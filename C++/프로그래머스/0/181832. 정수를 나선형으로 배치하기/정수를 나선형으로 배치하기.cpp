#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n)
{
	vector<vector<int>> answer(n, vector<int>(n, 0));
	int num = 1;
	int top = 0, bottom = n - 1, left = 0, right = n - 1;

	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)
			answer[top][i] = num++;
		top++;

		for (int i = top; i <= bottom; i++)
			answer[i][right] = num++;
		right--;

		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
				answer[bottom][i] = num++;
			bottom--;
		}

		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
				answer[i][left] = num++;
			left++;
		}
	}

	return answer;
}
