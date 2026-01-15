#include <iostream>
#include <string_view>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string input;
	constexpr string_view skip[] =
	{ 
		"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" 
	};

    bool isFirst = true;

    while (cin >> input)
    {
        bool isSkip = false;

        if (!isFirst)
        {
            for (string_view s : skip)
            {
                if (input == s)
                {
                    isSkip = true;
                    break;
                }
            }
        }

        if (!isSkip)
            cout << (char)toupper((unsigned char)input[0]);

        isFirst = false;
    }

	cout << '\n';

	return 0;
}