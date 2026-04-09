#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str1[] = { "SHIP NAME","N2 Bomber","J-Type 327","NX Cruiser","N1 Starfighter","Royal Cruiser" };
	string str2[] = { "CLASS","Heavy Fighter","Light Combat","Medium Fighter","Medium Fighter","Light Combat" };
	string str3[] = { "DEPLOYMENT","Limited","Unlimited","Limited","Unlimited","Limited" };
	string str4[] = { "IN SERVICE","21","1","18","25","4" };

	for (int i = 0;i < 6;i++)
		cout << left << setw(15) << str1[i] << setw(15) << str2[i] << setw(11) << str3[i] << setw(10) << str4[i] << '\n';

	return 0;
}