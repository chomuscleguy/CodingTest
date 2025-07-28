#include <iostream>
#include <vector>
#include <algorithm>

struct resultTable
{
	int country;
	int number;
	int score;
};

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<resultTable> v(N);
	vector<int> country(101);

	for (int i = 0; i < N; i++)
		cin >> v[i].country >> v[i].number >> v[i].score;

	sort(v.begin(), v.end(), [](resultTable& a, resultTable& b)
		{
		return a.score > b.score;
		});

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (count == 3)
			break;
		if (country[v[i].country] < 2)
		{
			cout << v[i].country << ' ' << v[i].number << '\n';
			country[v[i].country]++;
			count++;
		}
	}
	
	return 0;
}