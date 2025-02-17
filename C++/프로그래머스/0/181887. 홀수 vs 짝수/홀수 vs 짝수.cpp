#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
	int even = 0;
	int odd = 0;

	for (int i = 0; i < num_list.size(); i++)
		i % 2 ? odd += num_list[i] : even += num_list[i];

	return odd>even? odd : even;
}