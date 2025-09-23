#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<char, pair<char, char>> tree;

void preOrder(char node)
{
	if (node == '.')
		return;

	cout << node;
	preOrder(tree[node].first);
	preOrder(tree[node].second);
}

void inOrder(char node)
{
	if (node == '.')
		return;

	inOrder(tree[node].first);
	cout << node;
	inOrder(tree[node].second);
}

void postOrder(char node)
{
	if (node == '.')
		return;

	postOrder(tree[node].first);
	postOrder(tree[node].second);
	cout << node;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		char ch;
		cin >> ch;
		cin >> tree[ch].first >> tree[ch].second;
	}

	preOrder('A');
	cout << '\n';
	inOrder('A');
	cout << '\n';
	postOrder('A');
	cout << '\n';

	return 0;
}