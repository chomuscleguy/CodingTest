#include <iostream>

using namespace std;

int main()
{
	char c;
	cin >> c;

	cout << (toupper(c) == 'N' ? "Naver D2" : "Naver Whale") << '\n';

	return 0;
}
