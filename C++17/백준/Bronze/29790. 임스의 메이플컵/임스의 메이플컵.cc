#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, U, L;

	cin >> N >> U >> L;

	cout << (N >= 1000 ? U >= 8000 ? "Very Good" : L >= 260 ? "Very Good" : "Good" : "Bad") << '\n';

	return 0;
}