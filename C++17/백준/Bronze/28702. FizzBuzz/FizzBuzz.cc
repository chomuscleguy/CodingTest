#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string input;
	int lastDigit = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> input;

		if (input.back() != 'z')
			lastDigit = stoi(input) + 4 - (i + 1);
	}

	if (lastDigit % 3 == 0 && lastDigit % 5 == 0)
		cout << "FizzBuzz";
	else if (lastDigit % 3 == 0)
		cout << "Fizz";
	else if (lastDigit % 5 == 0)
		cout << "Buzz";
	else
		cout << lastDigit;

	return 0;
}
