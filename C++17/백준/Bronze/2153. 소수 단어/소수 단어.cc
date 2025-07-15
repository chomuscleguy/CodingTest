#include <iostream>
#include <vector>

#define LIMIT 1041

using namespace std;

int main()
{
	string word;
	vector<bool> isPrime(LIMIT, true);
	isPrime[0] = false;

	for (int i = 2; i * i < LIMIT; i++)
		if (isPrime[i])
			for (int j = i * i; j < LIMIT; j += i)
				isPrime[j] = false;

	cin >> word;

	int sum = 0;
	for (char ch : word)
	{
		if (islower(ch))
			sum += ch - 'a' + 1;
		else if (isupper(ch))
			sum += ch - 'A' + 27;
	}
		
	string result = isPrime[sum] ? "It is a prime word." : "It is not a prime word.";;

	cout << result << '\n';

	return 0;
}