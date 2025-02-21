#include <string>
#include <sstream>

using namespace std;

int solution(string binomial) 
{
    int a, c;
    char op;
    istringstream(binomial) >> a >> op >> c;
    return (op == '+') ? a + c : (op == '-') ? a - c : a * c;
}
