#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream ss(input);
    vector<string> words{ istream_iterator<string>{ss}, istream_iterator<string>{} };

    cout << words.size() << endl;

    return 0;
}