#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    for (int& n : arr)
        n = k % 2 ? n * k : n + k;
    return arr; 
}