#include <iostream>

using namespace std;

int main()
{
	string name, type;
	int age, weight;

	while (true)
	{
		cin >> name >> age >> weight;

		if (name == "#")
			break;

		if (age > 17 || weight >= 80)
			type = "Senior";
		else
			type = "Junior";

		cout << name << ' ' << type << '\n';
	}

	return 0;
}
