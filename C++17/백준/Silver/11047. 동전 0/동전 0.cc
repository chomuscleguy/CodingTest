#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	vector<int>v(N);

	for (int i = 0; i < N;i++)
		cin >> v[i];

	int sum = K;
	int count = 0;

	for (int i = N - 1; i >= 0; i--) 
	{
		if (sum == 0)
			break;
		if (v[i] <= sum) 
		{
			count += sum / v[i];
			sum %= v[i];
		}
	}

	cout << count;

	return 0;
}
