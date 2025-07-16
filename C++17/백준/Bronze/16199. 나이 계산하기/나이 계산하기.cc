#include <iostream>

using namespace std;

int main()
{
	int aY, aM, aD, bY, bM, bD;
	cin >> aY >> aM >> aD >> bY >> bM >> bD;

	int age = bY - aY;
	bool isOld = (bM > aM) || (bM == aM && bD >= aD);

	cout << (isOld ? age : age - 1) << '\n';
	cout << age + 1 << '\n';
	cout << age << '\n';

	return 0;
}