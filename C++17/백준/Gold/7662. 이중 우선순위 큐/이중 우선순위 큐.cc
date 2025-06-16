#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

priority_queue<int> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;
unordered_map<int, int> cnt;

void cleanHeaps()
{
	while (!maxHeap.empty() && cnt[maxHeap.top()] == 0)
		maxHeap.pop();
	while (!minHeap.empty() && cnt[minHeap.top()] == 0)
		minHeap.pop();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		while (!maxHeap.empty())
			maxHeap.pop();
		while (!minHeap.empty())
			minHeap.pop();
		cnt.clear();

		int k;
		cin >> k;

		while (k--)
		{
			char cmd;
			int num;

			cin >> cmd >> num;

			if (cmd == 'I')
			{
				maxHeap.push(num);
				minHeap.push(num);
				cnt[num]++;
			}
			else if (cmd == 'D')
			{
				cleanHeaps();
				if (num == 1 && !maxHeap.empty())
				{
					cnt[maxHeap.top()]--;
					maxHeap.pop();
				}
				else if (num == -1 && !minHeap.empty())
				{
					cnt[minHeap.top()]--;
					minHeap.pop();
				}
			}
		}
		cleanHeaps();

		if (maxHeap.empty() || minHeap.empty())
			cout << "EMPTY" << '\n';
		else
			cout << maxHeap.top() << ' ' << minHeap.top() << '\n';
	}

	return 0;
}
