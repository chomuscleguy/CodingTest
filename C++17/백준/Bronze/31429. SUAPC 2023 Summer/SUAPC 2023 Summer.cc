#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> scoreBoard ={ { 12,1600 }, { 11,894 }, {11,1327},{10,1311}, {9,1004}, {9,1178}, {9,1357},{8,837},{7,1055},{6,556},{6,773} };

	cout << scoreBoard[N-1].first << ' ' << scoreBoard[N-1].second << '\n';

	return 0;
}