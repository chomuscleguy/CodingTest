#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;

	while (cin >> N && N != 0)
	{
		float maxHeight = 0;
		vector<string> storage;

		for (int i = 0;i < N;i++)
		{
			string name;
			float height;
			cin >> name >> height;

			if (maxHeight < height)
			{
				maxHeight = height;
				storage.clear();
				storage.push_back(name);
			}
			else if (maxHeight == height)
				storage.push_back(name);
		}

		for (string s : storage)
			cout << s << ' ';

		cout << '\n';
	}

	return 0;
}