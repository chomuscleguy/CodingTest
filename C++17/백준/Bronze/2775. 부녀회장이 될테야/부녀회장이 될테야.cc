#include <iostream>
#include <vector>

using namespace std;

int calculatePeople(int k, int n) 
{
    vector<vector<int>> apartment(k + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) 
        apartment[0][i] = i;

    for (int i = 1; i <= k; i++) 
        for (int j = 1; j <= n; j++) 
            apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];

    return apartment[k][n];
}

void getInputs(int T, vector<vector<int>>& inputs) 
{
    int k, n;
    for (int i = 0; i < T; i++)
    {
        cin >> k >> n;
        inputs.push_back({ k, n });
    }
}

int main() 
{
    int T;
    cin >> T;

    vector<vector<int>> inputs;
    getInputs(T, inputs);

    vector<int> results;
    for (vector<int>& input : inputs)
    {
        int k = input[0];
        int n = input[1];
        results.push_back(calculatePeople(k, n));
    }

    for (int result : results) 
        cout << result << endl;

    return 0;
}
