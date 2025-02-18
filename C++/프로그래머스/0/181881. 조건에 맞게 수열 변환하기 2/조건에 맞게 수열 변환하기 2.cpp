#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr)
{
    bool isCheck;

    for (int i = 0; i < arr.size(); i++)
    {
        isCheck = true;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] >= 50 && arr[j] % 2 == 0)
            {
                arr[j] /= 2;
                isCheck = false;
            }
            else if (arr[j] < 50 && arr[j] % 2 != 0)
            {
                arr[j] = arr[j] * 2 + 1;
                isCheck = false;
            }
        }
        if (isCheck)
            return i;
    }

    return 0;
}
