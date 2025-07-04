#include <iostream>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		string input,result;

		cin >> input;
		
		input.size() >= 6 && input.size() <= 9 ? result = "yes" : result = "no";

		cout << result << '\n';
	}
}
