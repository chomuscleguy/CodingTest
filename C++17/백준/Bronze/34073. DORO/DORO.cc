#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	string str;

	while (N-- && cin >> str)
		cout << str << "DORO ";

	return 0;
}