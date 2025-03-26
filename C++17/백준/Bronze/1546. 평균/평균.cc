#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, input, temp = 0;
	cin >> n;

	vector<float> results;
	float sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (temp == 0 || temp < input)
			temp = input;
		results.push_back(input);
	}

	for (float result : results)
		sum += (result / temp) * 100;

	cout << sum / n;

	return 0;
}
