#include <iostream>

using namespace std;

int A, B, cnt = 1;

void calc(int& num)
{
	if (num == A)
	{
		cout << cnt << '\n';
		return;
	}
	else if (num < A || num == 0)
	{
		cout << -1 << '\n';
		return;
	}

	if (num % 10 == 1)
	{
		num /= 10;
		cnt++;
		calc(num);
	}
	else if (num % 2 == 0)
	{
		num /= 2;
		cnt++;
		calc(num);
	}
	else 
	{
		cout << -1 << '\n';
		return;
	}
}

int main()
{
	cin >> A >> B;
	calc(B);

	return 0;
}