#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_map<string, string> um = { {"fdsajkl;","in-out"},{"jkl;fdsa","in-out"},	{"asdf;lkj","out-in"}, {";lkjasdf","out-in"},{"asdfjkl;","stairs"}, {";lkjfdsa","reverse"} };
	string S;
	cin >> S;

	auto it = um.find(S);

	if (it != um.end())
		cout << it->second << "\n";
	else
		cout << "molu" << '\n';

	return 0;
}