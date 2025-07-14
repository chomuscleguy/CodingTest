#include <iostream>

using namespace std;

void printBlock(int count, int repeat, string block)
{
	for (int k = 0; k < repeat; k++)
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < count; j++)
				cout << block;
			cout << '\n';
		}
}

int main()
{
	int N;
	cin >> N;

	printBlock(N, 1, "@@@@@");
	printBlock(N, 1, "@");
	printBlock(N, 1, "@@@@@");
	printBlock(N, 2, "@");

	return 0;
}
