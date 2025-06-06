#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	time_t now = time(nullptr);
	tm gmtime;

	gmtime_r(&now, &gmtime);

	cout << 1900 + gmtime.tm_year << '\n';
	cout << setw(2) << setfill('0') << gmtime.tm_mon + 1 << '\n';
	cout << setw(2) << setfill('0') << gmtime.tm_mday << '\n';

	return 0;
}