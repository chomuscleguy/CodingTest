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

    vector<int> queue;

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
            queue.push_back(stoi(words[1]));
        if (words[0] == "pop")
            if (!queue.empty())
            {
                cout << queue.front() << "\n";
                queue.erase(queue.begin());
            }
            else
                cout << -1 << "\n";

        if (words[0] == "size")
            cout << queue.size() << "\n";

        if (words[0] == "empty")
            if (!queue.empty())
                cout << 0 << "\n";
            else
                cout << 1 << "\n";

        if (words[0] == "back")
        {
            if (!queue.empty())
                cout << queue.back() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (words[0] == "front")
        {
            if (!queue.empty())
                cout << queue.front() << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}
