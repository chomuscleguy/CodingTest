#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X, v;
	cin >> N;

	int* arr= new int[N];

	for (int i = 0; i < N; ++i)
		cin >> arr[i];
	
	cin >> v;
	int count = 0;
	
	for (int i = 0; i < N; ++i) 
		if (arr[i] == v)
			count++;

	cout << count;

	delete[] arr;

	return 0;
}
