#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float N, M;
	cin >> N >> M;

	int a = 1440 * (float)(M / N);

	cout << setfill('0') << setw(2) << a / 60 << ":" << setw(2) << a % 60;

	return 0;
}
