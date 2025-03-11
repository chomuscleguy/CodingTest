#include <string>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

int calc(int key, int pos)
{
	int keyVert = (key - 1) / 3;
	int keyHori = (key - 1) % 3;

	int posVert = (pos - 1) / 3;
	int posHori = (pos - 1) % 3;

	return abs(keyVert - posVert) + abs(keyHori - posHori);
};

string solution(vector<int> numbers, string hand)
{
	string answer = "";

	unordered_set<int> rh_set = { 3, 6, 9 };
	unordered_set<int> lh_set = { 1, 4, 7 };

	int rhPos = 12;
	int lhPos = 10;

	for (int n : numbers)
	{
        if(n == 0)
        {
            n = 11;
        }
		if (rh_set.count(n))
		{
			answer += 'R';
			rhPos = n;
		}
		else if (lh_set.count(n))
		{
			answer += 'L';
			lhPos = n;
		}
		else
		{
			int rhDist = calc(n, rhPos);
			int lhDist = calc(n, lhPos);

			if (rhDist < lhDist)
			{
				answer += 'R';
				rhPos = n;
			}
			else if (lhDist < rhDist)
			{
				answer += 'L';
				lhPos = n;
			}
			else 
			{
				if (hand == "right")
				{
					answer += 'R';
					rhPos = n;
				}
				else
				{
					answer += 'L';
					lhPos = n;
				}
			}
		}
	}

	return answer;
}
