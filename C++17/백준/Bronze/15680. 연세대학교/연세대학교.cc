#include <iostream>

using namespace std;

int main()
{
	int N;
	string output;
	cin >> N;

	switch (N)
	{
	case 1: output = "Leading the Way to the Future";
		break;
	case 0: output = "YONSEI";
		break;
	}

	cout << output << '\n';

	return 0;
}
