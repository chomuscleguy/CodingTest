#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr)
{
    int rows = arr.size();
    int cols = arr[0].size();

    if (rows > cols)
        for (int i = 0; i < rows; i++) 
            arr[i].resize(rows, 0);
    else if (cols > rows)
        arr.resize(cols, vector<int>(cols, 0));

	return arr; 
}