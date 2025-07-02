#include <iostream>

using namespace std;

int N;

void print(int start)
{
	for (int i = start; i > 0; i--)
		cout << i << '\n';
}

int main()
{
	cin >> N;
	print(N);

	return 0;
}
