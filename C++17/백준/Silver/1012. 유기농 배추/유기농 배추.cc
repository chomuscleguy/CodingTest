#include <iostream>
#include <vector>

using namespace std;

int T, M, N, K;
vector<vector<int>> field;
vector<vector<bool>> visited;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

void dfs(int x, int y) 
{
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) 
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < M && ny >= 0 && ny < N) 
        {
            if (field[ny][nx] == 1 && !visited[ny][nx])
            {
                dfs(nx, ny);
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> T;

    while (T--) 
    {
        cin >> M >> N >> K;

        field.assign(N, vector<int>(M, 0));
        visited.assign(N, vector<bool>(M, false));

        for (int i = 0; i < K; i++) 
        {
            int x, y;
            cin >> x >> y;
            field[y][x] = 1;
        }

        int count = 0;

        for (int y = 0; y < N; y++) 
        {
            for (int x = 0; x < M; x++) 
            {
                if (field[y][x] == 1 && !visited[y][x])
                {
                    dfs(x, y);
                    count++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
