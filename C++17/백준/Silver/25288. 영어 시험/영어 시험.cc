#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string s;
	cin >> N >> s;

	while (N--)
		cout << s;

	return 0;
}