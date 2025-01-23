#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int sum = 0;
	int pow = 0;

	for (int i = 1; i <= n; i++)
		i % 2 ? sum += i : pow += i * i;
	return n % 2 ? sum : pow;
}