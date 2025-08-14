#include <iostream>

using namespace std;

int countBits(unsigned int x)
{
	int count = 0;
	while (x)
	{
		count += (x & 1); 
		x >>= 1;          
	}

	return count;
}

int main()
{
	unsigned int N;
	cin >> N;

	unsigned int diff = N ^ ((~N) + 1);

	cout << countBits(diff) << "\n";
	return 0;
}