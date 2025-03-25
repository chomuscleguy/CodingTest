#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, T, P;
	cin >> N;

	vector<int> inputs(6);
	int result = 0;

	for (int& input : inputs)
		cin >> input;

	cin >> T >> P;
	
	for (int input : inputs)
		result += (input + T - 1) / T;


	cout << result << "\n" << N / P << " " << N % P;

	return 0;
}
