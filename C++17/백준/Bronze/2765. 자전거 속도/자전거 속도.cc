#include <iostream>
#include <iomanip>

#define pi 3.1415927

using namespace std;

int main()
{
	double dia, sec;
	unsigned int rot;

	int count = 0;

	while (true)
	{
		cin >> dia >> rot >> sec;

		if (rot == 0)
			break;

		count++;

		double distance = dia * rot * pi / 63360;
		double MPH = distance * 3600 / sec;

		cout << fixed << setprecision(2);
		cout << "Trip #" << count << ": " << distance << ' ' << MPH << '\n';
	}

	return 0;
}