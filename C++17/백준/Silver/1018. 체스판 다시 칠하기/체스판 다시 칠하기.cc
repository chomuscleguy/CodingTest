#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int N, M;
	cin >> N >> M;

	vector<string> board(N);

	for (int i = 0; i < N; ++i)
		cin >> board[i];

	int minCount = 64;

	for (int i = 0; i <= N - 8; ++i)
	{
		for (int ii = 0; ii <= M - 8; ii++)
		{
			int count1 = 0;
			int count2 = 0;

			for (int iii = 0; iii < 8; iii++)
			{
				for (int iv = 0; iv < 8; iv++)
				{

					char expected1 = ((iii + iv) % 2 == 0) ? 'W' : 'B';
					char expected2 = ((iii + iv) % 2 == 0) ? 'B' : 'W';

					if (board[i + iii][ii + iv] != expected1)
						count1++;
					if (board[i + iii][ii + iv] != expected2)
						count2++;
				}
			}

			minCount = min(minCount, min(count1, count2));
		}
	}

	cout << minCount << endl;

	return 0;
}
