#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
	int answer = 0;
	int x = a * pow(10, (int)(log10(b) + 1)) + b;
	int y = 2 * a * b;

	return answer = max(x, y);
}