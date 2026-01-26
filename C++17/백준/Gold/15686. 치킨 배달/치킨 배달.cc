#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N, M;
int answer = 0x7FFFFFF;

vector<pair<int, int>> house;
vector<pair<int, int>> chicken;
vector<int> selected; 
vector<vector<int>> chickenDist;

int dist(const pair<int, int>& a, const pair<int, int>& b)
{
    return abs(a.first - b.first) + abs(a.second - b.second);
}

void dfs(int idx, int cnt)
{
    if (cnt == M)
    {
        int cityDist = 0;

        for (int h = 0; h < house.size(); h++)
        {
            int best = 0x7FFFFFF;
            for (int c : selected)
                best = min(best, chickenDist[c][h]);

            cityDist += best;
        }

        answer = min(answer, cityDist);
        return;
    }

    if (idx == chicken.size())
        return;

    if (cnt + (chicken.size() - idx) < M)
        return;

    selected.push_back(idx);
    dfs(idx + 1, cnt + 1);

    selected.pop_back();
    dfs(idx + 1, cnt);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int x;
            cin >> x;

            if (x == 1)
                house.push_back({ i, j });
            else if (x == 2)
                chicken.push_back({ i, j });
        }
    }

    int H = house.size();
    int C = chicken.size();

    chickenDist.assign(C, vector<int>(H));

    for (int c = 0; c < C; c++)
        for (int h = 0; h < H; h++)
            chickenDist[c][h] = dist(chicken[c], house[h]);

    dfs(0, 0);

    cout << answer << '\n';

    return 0;
}