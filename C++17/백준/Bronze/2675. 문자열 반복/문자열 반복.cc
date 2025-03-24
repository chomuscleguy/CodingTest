#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<string> S(n);      
    vector<int> R(n);         
    vector<string> result(n); 

    for (int i = 0; i < n; i++) 
    {
        cin >> R[i] >> S[i];
        for (char ch : S[i]) 
            result[i].append(R[i], ch);
    }

    for (string str : result)
        cout << str << endl;

    return 0;
}
