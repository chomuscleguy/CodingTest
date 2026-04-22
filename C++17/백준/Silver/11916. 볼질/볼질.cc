#include <iostream>

using namespace std;

int base[4] = { 0, 0, 0, 0 };
int ball = 0;

void OnBase()
{
	for (int i = 0;i < 3;i++)
	{
		if (base[i] > 1)
		{
			base[i + 1]++;
			base[i]--;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	while (N--)
	{
		int pitch;
		cin >> pitch;

		if (pitch == 1)
			ball++;
		else if (pitch == 3)
		{
			ball++;
			base[3] += base[2];
			base[2] = base[1];
			base[1] = base[0];
			base[0] = 0;
		}
		else
		{	
			base[0]++;
			OnBase();
			ball = 0;
		}

		if (ball == 4)
		{
			base[0]++;
			OnBase();
			ball = 0;
		}
	}

	cout << base[3] << '\n';

	return 0;
}