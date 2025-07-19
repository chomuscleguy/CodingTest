#include <iostream>

using namespace std;

int main()
{
	int N, k, floor = 0;
	string mascot;
	cin >> N >> mascot >> k;

	if ((mascot == "annyong" && k % 2) || mascot != "annyong" && !(k % 2))
		floor = k;
	else if (k + 1 <= N)
		floor = k + 1;
	else
		floor = k - 1;

	cout << floor << '\n';

	return 0;
}