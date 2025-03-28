#include <iostream>


using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X, Y;
	cin >> N;

	while (N--)
	{
		cin >> X >> Y;
		cout << X + Y << "\n";
	}

	return 0;
}
