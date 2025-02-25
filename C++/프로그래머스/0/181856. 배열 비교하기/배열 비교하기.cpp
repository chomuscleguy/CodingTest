#include <string>
#include <vector>

using namespace std;

int sumOfArray(const vector<int>& arr)
{
	int sum = 0;
	for (int n : arr)
		sum += n;
	return sum;
}

int solution(vector<int> arr1, vector<int> arr2)
{
	int a1Size = arr1.size();
	int a2Size = arr2.size();

	if (a1Size == a2Size)
	{
		int a1Sum = sumOfArray(arr1);
		int a2Sum = sumOfArray(arr2);

		if (a1Sum == a2Sum) 
            return 0;
		return a1Sum > a2Sum ? 1 : -1;
	}

	return a1Size > a2Size ? 1 : -1;
}