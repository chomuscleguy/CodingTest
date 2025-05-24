#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> board(N, vector<int>(M));
    vector<vector<int>> count(N, vector<int>(M));

    string input;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        for (int j = 0; j <M; j++)
            board[i][j] = input[j] - '0';
    }

    queue<pair<int, int>> q;

    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };

    q.push({ 0, 0 });
    count[0][0] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == N - 1 && y == M - 1)
            break;

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;

            if (!count[nx][ny] && board[nx][ny] == 1)
            {
                count[nx][ny] = count[x][y] + 1;
                q.push({ nx, ny });
            }
        }
    }

    cout << count[N - 1][M - 1] << '\n';

    return 0;
}