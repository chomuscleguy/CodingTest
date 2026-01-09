#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string S, all;

	while (getline(cin, S))
		all += S;
	
	stringstream ss(all);
	string token;
	int sum = 0;

	while (getline(ss, token, ','))
		sum += stoi(token);

	cout << sum << '\n';
}