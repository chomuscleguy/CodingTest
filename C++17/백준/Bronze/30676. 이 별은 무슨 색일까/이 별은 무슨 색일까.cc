#include <iostream>
#include <vector>

using namespace std;

enum StarType
{
	Violet,
	Indigo,
	Blue,
	Green,
	Yellow,
	Orange,
	Red,
	Unknown
};

struct StarRange
{
	int minWaveLength;
	StarType type;
};

constexpr StarRange STAR_TABLE[] =
{
	{ 620, Red },
	{ 590, Orange },
	{ 570, Yellow },
	{ 495, Green },
	{ 450, Blue },
	{ 425, Indigo },
	{ 380, Violet }
};

StarType classifyStar(int wavelength)
{
	for (const StarRange& e : STAR_TABLE)
	{
		if (wavelength >= e.minWaveLength)
			return e.type;
	}
	return Unknown;
}

const string toString(StarType type)
{
	switch (type)
	{
	case Red:
		return "Red";
	case Orange:
		return "Orange";
	case Yellow:
		return "Yellow";
	case Green:
		return "Green";
	case Blue:
		return "Blue";
	case Indigo:
		return "Indigo";
	case Violet:
		return "Violet";
	default:
		return "Unknown";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int wavelength;
	cin >> wavelength;

	StarType type = classifyStar(wavelength);
	cout << toString(type) << '\n';

	return 0;
}