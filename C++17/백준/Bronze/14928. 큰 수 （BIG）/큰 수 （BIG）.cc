#include <iostream>
#include <string>

#define fNum 20000303

using namespace std;

int main()
{
	string N;
	cin >> N;

	int remain = 0;

	for (char c : N)
		remain = (remain * 10 + (c - '0')) % fNum;

	cout << remain << '\n';

	return 0;
}