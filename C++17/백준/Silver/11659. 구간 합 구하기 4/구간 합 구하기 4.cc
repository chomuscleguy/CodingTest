#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int N, M;
	cin >> N >> M;

	int arr[100001] = { 0 };

	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;
		arr[i] = arr[i - 1] + num;
	}

	while (M--)
	{
		int start, end;
		cin >> start >> end;

		cout << arr[end] - arr[start - 1] << "\n";
	}

	return 0;
}
