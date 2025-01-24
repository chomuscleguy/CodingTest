#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int sum = 0;
    int product = 1;

    for (int num : num_list) 
    {
        sum += num;
        product *= num;
    }

    return (sum * sum > product) ? 1 : 0;
}
