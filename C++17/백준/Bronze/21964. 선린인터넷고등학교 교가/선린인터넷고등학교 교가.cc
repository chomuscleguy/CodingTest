#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	char* pc = new char[N + 1];
	cin >> pc;
	char* base = pc;

	if (N > 5)
		pc += (N - 5);

	cout << pc << '\n';

	delete[] base;

	return 0;
}