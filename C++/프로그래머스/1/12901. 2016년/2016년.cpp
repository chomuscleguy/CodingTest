#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
	
	int Month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int Day = b;

	for (int i = 0; i < a-1; i++)
		Day += Month[i];

	int week = (Day + 4) % 7;

	string dayOfWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	return dayOfWeek[week];

}