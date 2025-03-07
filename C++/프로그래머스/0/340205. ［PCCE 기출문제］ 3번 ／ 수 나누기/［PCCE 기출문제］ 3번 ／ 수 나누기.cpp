#include <iostream>

using namespace std;

int main(void) {
    int number;
    cin >> number;
    
    int answer = 0;
    
    for(int i=0; i<1; i++){
        answer += number % 100;
        while(number){answer += (number /= 100)%100;};
    }
    cout << answer << endl;
    return 0;
}