#include <iostream>
#include <string>
using namespace std;

string s; int slen;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;
	slen = s.length();

	for (int i = 0; i < slen; i++) cout << i << '\n';
}