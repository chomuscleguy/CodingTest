#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	cout << 1900 + ltm->tm_year << '-' << setfill('0') << setw(2) << 1 + ltm->tm_mon << '-'
		<< setw(2) << ltm->tm_mday << endl;

	return 0;
}

