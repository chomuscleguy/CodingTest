#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
	num_list.back() > *(num_list.end() - 2) ? num_list.push_back(num_list.back() - *(num_list.end() - 2 )) : num_list.push_back(num_list.back() * 2);

	return num_list;
}