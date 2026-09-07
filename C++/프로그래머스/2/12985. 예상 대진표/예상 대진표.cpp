#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
	return log2((a - 1) ^ (b - 1)) + 1;
}

int main()
{
	int N, A, B;
	cin >> N >> A >> B;

	cout << solution(N, A, B) << '\n';

	return 0;
}