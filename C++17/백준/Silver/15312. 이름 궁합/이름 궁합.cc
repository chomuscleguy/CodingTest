#include <iostream>
#include <vector>

using namespace std;

const int Alphabet[26] = { 3,2,1,2,3,3,2,3,3,2,2,1,2,2,1,2,2,2,1,2,1,1,1,2,2,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string A, B;
	cin >> A >> B;

	vector<int> v;
	for (int i = 0; i < A.size(); i++)
	{
		v.push_back(Alphabet[A[i] - 'A']);
		v.push_back(Alphabet[B[i] - 'A']);
	}

	while (v.size() > 2)
	{
		vector<int> tmp;
		for (int i = 0; i < v.size() - 1; i++)
			tmp.push_back((v[i] + v[i + 1]) % 10);
		v = tmp;
	}

	cout << v[0] << v[1] << '\n';
}