#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, B;

    cin >> N >> M >> B;

    vector<vector<int>> ground(N, vector<int>(M));

    int maxHeight = 0;
    int minHeight = 256;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> ground[i][j];

            maxHeight = max(maxHeight, ground[i][j]);
            minHeight = min(minHeight, ground[i][j]);
        }
    }

    int resultTime = 0x7FFFFFFF;
    int resultHeight = -1;

    for (int h = minHeight; h <= maxHeight; h++)
    {
        int time = 0;
        int blocks = B;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int diff = ground[i][j] - h;

                if (diff > 0)
                {
                    time += 2 * diff;
                    blocks += diff;
                }
                else if (diff < 0)
                {
                    time += -diff;
                    blocks += diff;
                }
            }
        }

        if (blocks >= 0 && time <= resultTime)
        {
            resultTime = time;
            resultHeight = h;
        }
    }

    cout << resultTime << " " << resultHeight;

    return 0;
}

