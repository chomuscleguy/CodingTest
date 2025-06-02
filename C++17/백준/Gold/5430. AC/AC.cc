#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		string p;
		int n;
		string input;
		cin >> p >> n >> input;

		deque<int> dq;
		string num;
		for (char ch : input)
		{
			if (isdigit(ch))
				num += ch;
			else if (ch == ',' || ch == ']')
			{
				if (!num.empty())
				{
					dq.push_back(stoi(num));
					num.clear();
				}
			}
		}

		bool isReversed = false;
		bool error = false;

		for (char cmd : p)
		{
			if (cmd == 'R')
			{
				isReversed = !isReversed;
			}
			else if (cmd == 'D')
			{
				if (dq.empty())
				{
					error = true;
					break;
				}
				if (isReversed)
					dq.pop_back();
				else
					dq.pop_front();
			}
		}

		if (error)
		{
			cout << "error" << '\n';
		}
		else
		{
			cout << "[";
			if (isReversed)
			{
				for (auto it = dq.rbegin(); it != dq.rend(); ++it)
				{
					if (it != dq.rbegin()) cout << ",";
					cout << *it;
				}
			}
			else {
				for (auto it = dq.begin(); it != dq.end(); ++it)
				{
					if (it != dq.begin()) cout << ",";
					cout << *it;
				}
			}
			cout << "]" << '\n';
		}
	}

	return 0;
}
