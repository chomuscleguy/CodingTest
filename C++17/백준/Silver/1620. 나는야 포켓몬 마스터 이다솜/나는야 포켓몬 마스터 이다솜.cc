#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    vector<string> Document(M);           
    unordered_map<string, int> name_to_idx; 
    unordered_map<int, string> idx_to_name; 

    for (int i = 0; i < M; i++) 
    {
        cin >> Document[i];
        name_to_idx[Document[i]] = i + 1;  
        idx_to_name[i + 1] = Document[i];  
    }

    while (N--) 
    {
        string input;
        cin >> input;

        if (input[0] >= '0' && input[0] <= '9') 
        {
            int idx = stoi(input);
            cout << idx_to_name[idx] << "\n";
        }
        else 
            cout << name_to_idx[input] << "\n";
    }

    return 0;
}
