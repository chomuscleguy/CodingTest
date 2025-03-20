#include <vector>

using namespace std;

vector<int> solution(vector<int> array)
{
    int max_val = array[0], max_idx = 0;
    for (int i = 1; i < array.size(); i++)
    {
        if (array[i] > max_val)
        {
            max_val = array[i];
            max_idx = i;
        }
    }
    return { max_val, max_idx };
}
