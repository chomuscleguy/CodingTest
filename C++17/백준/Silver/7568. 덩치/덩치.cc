#include <iostream>
#include <vector>;

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> people(n);

	for (int i = 0; i < n; i++)
		cin >> people[i].first >> people[i].second;

	vector<int> ranks(n, 1);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
            if (i != j) 
                if (people[i].first < people[j].first && people[i].second < people[j].second) 
                    ranks[i]++;

	for (int i = 0; i < n; i++) 
		cout << ranks[i] << " ";

	return 0;
}
