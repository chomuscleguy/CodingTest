#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Guest
{
	char affi;
	int checkIn;
	int checkOut;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<Guest> guests(N);

	int minCheckIn = 0x7FFFFFFF;
	int maxCheckOut = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> guests[i].affi >> guests[i].checkIn >> guests[i].checkOut;

		minCheckIn = min(minCheckIn, guests[i].checkIn);
		maxCheckOut = max(maxCheckOut, guests[i].checkOut);
	}

	int dayCount = maxCheckOut - minCheckIn + 1;

	vector<int> Tdiff(dayCount + 1, 0);
	vector<int> Sdiff(dayCount + 1, 0);

	int maxStayLength = 0;

	for (const Guest& g : guests)
	{
		int start = g.checkIn - minCheckIn;
		int end = g.checkOut - minCheckIn;

		maxStayLength = max(maxStayLength, end - start + 1);

		vector<int>& diff = (g.affi == 'T') ? Tdiff : Sdiff;

		diff[start] += 1;
		diff[end + 1] -= 1;
	}

	vector<int> T(dayCount, 0);
	vector<int> S(dayCount, 0);

	T[0] = Tdiff[0];
	S[0] = Sdiff[0];

	for (int i = 1; i < dayCount; i++)
	{
		T[i] = T[i - 1] + Tdiff[i];
		S[i] = S[i - 1] + Sdiff[i];
	}

	int dayWithGuests = 0;
	int maxGuestsInADay = 0;
	int dayEqualTS = 0;
	int maxEqualTSGuests = 0;

	for (int i = 0; i < dayCount; i++)
	{
		int total = T[i] + S[i];

		if (total > 0)
			dayWithGuests++;

		maxGuestsInADay = max(maxGuestsInADay, total);

		if (total > 0 && T[i] == S[i])
		{
			dayEqualTS++;
			maxEqualTSGuests = max(maxEqualTSGuests, total);
		}
	}

	cout << dayWithGuests << '\n' << maxGuestsInADay << '\n' << dayEqualTS << '\n' << maxEqualTSGuests << '\n' << maxStayLength << '\n';

	return 0;
}