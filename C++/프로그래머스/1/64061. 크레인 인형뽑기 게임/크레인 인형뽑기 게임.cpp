#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    stack<int> stk;
    int answer = 0;

    for (int move : moves)
    {
        int col = move - 1;

        for (int row = 0; row < board.size(); row++)
        {
            if (board[row][col] != 0)
            {
                int num = board[row][col];
                board[row][col] = 0;
                if (!stk.empty() && stk.top() == num)
                {
                    stk.pop();
                    answer += 2;
                }
                else
                    stk.push(num);

                break;
            }
        }
    }

    return answer;
}
