#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int finger[8] = { 2,1,2,3,4,5,4,3 };

	cout << finger[n % 8] << '\n';

	return 0;
}