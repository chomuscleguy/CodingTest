#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string* floorStr = new string[n];
	string* roomStr = new string[n];

	for (int i = 0; i < n; i++)
	{
		int H, W, N;
		cin >> H >> W >> N;

		int floor = (N % H) == 0 ? H : N % H;
		int room = (N + H - 1) / H;

		floorStr[i] = to_string(floor);
		roomStr[i] = (room < 10 ? "0" : "") + to_string(room);
	}

	for (int i = 0; i < n; i++)
		cout << floorStr[i] << roomStr[i] << endl;

	return 0;
}
