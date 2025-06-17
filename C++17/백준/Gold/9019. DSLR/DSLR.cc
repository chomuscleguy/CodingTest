#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;

        vector<char> visited(10000, 0);
        vector<int> parent(10000, -1);
        queue<int> q;

        q.push(A);
        visited[A] = 'S';

        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            if (cur == B) 
                break;

            int next[4];
            next[0] = (cur * 2) % 10000;                   
            next[1] = (cur == 0 ? 9999 : cur - 1);         
            next[2] = (cur % 1000) * 10 + cur / 1000;      
            next[3] = (cur % 10) * 1000 + cur / 10;        

            char cmd[4] = { 'D', 'S', 'L', 'R' };

            for (int i = 0; i < 4; ++i)
            {
                if (!visited[next[i]])
                {
                    visited[next[i]] = cmd[i];  
                    parent[next[i]] = cur;      
                    q.push(next[i]);
                }
            }
        }

        string result;
        int cur = B;

        while (cur != A)
        {
            result += visited[cur];
            cur = parent[cur];
        }

        reverse(result.begin(), result.end());

        cout << result << '\n';
    }

    return 0;
}
