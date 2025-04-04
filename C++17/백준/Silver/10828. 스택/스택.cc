#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	cin.ignore();

	vector<int> stack;

	while (N--)
	{
		string command;
		getline(cin, command);
		istringstream stream(command);
		string word;
		vector<string> words;

		while (stream >> word)
			words.push_back(word);

		if (words[0] == "push")
			stack.push_back(stoi(words[1]));
		if (words[0] == "top")
			if (!stack.empty())
				cout << stack.back() << "\n";
			else
				cout << -1 << "\n";

		if (words[0] == "size")
			cout << stack.size() << "\n";
		if (words[0] == "pop")
			if (!stack.empty())
			{
				cout << stack.back() << "\n";
				stack.pop_back();
			}
			else
				cout << -1 << "\n";
		if (words[0] == "empty")
			if (!stack.empty())
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
	}
	return 0;
}
