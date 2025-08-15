#include <iostream>
#include <vector>

using namespace std;

char table[4][4] =
{
    {'A', 'C', 'A', 'G'},
    {'C', 'G', 'T', 'A'},
    {'A', 'T', 'C', 'G'},
    {'G', 'A', 'G', 'T'}
};

int index(char c)
{
    switch (c)
    {
    case 'A': 
        return 0;
    case 'G': 
        return 1;
    case 'C': 
        return 2;
    case 'T': 
        return 3;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string DNA;
    cin >> DNA;

    char last = DNA.back();

    for (int i = N - 2; i >= 0; i--) 
        last = table[index(DNA[i])][index(last)];

    cout << last << '\n';

    return 0;
}