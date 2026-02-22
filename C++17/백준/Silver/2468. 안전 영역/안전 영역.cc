#include <iostream>
#include <algorithm>

using namespace std;

int N;
int board[101][101];
bool visited[101][101];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int x, int y, int rain)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= N || ny >= N)
            continue;

        if (!visited[nx][ny] && board[nx][ny] > rain)
            dfs(nx, ny, rain);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    int maxHeight = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
            maxHeight = max(maxHeight, board[i][j]);
        }
    }

    int answer = 0;

    for (int rain = 0; rain <= maxHeight; rain++)
    {
        fill(&visited[0][0], &visited[0][0] + 101 * 101, false);

        int safeArea = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (!visited[i][j] && board[i][j] > rain)
                {
                    dfs(i, j, rain);
                    safeArea++;
                }
            }
        }

        answer = max(answer, safeArea);
    }

    cout << answer;

    return 0;
}