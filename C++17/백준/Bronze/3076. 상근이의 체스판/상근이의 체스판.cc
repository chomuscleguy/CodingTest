#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int R, C, A, B;
	cin >> R >> C >> A >> B;

	vector<string> block(2);
	block[0] = string(B, 'X');
	block[1] = string(B, '.');

	for (int i = 0; i < R; i++)
	{
		for (int ii = 0; ii < A; ii++)
		{
			for (int iii = 0; iii < C; iii++)
				cout << block[(iii + i) % 2];
			cout << '\n';
		}
	}

	return 0;
}