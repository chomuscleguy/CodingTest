#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int parseNote(const string& noteText)
{
	static const int basePitch[7] = { 1, 3, 4, 6, 8, 9, 11 };
	int pitchIndex = basePitch[noteText[0] - 'A'];

	if (noteText.size() >= 2)
	{
		if (noteText[1] == 'b')
			pitchIndex--;
		else if (noteText[1] == '#')
			pitchIndex++;
	}

	return pitchIndex;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	const string pitchNames[12] = { "A","A#","B","C","C#","D","D#","E","F","F#","G","G#" };

	string noteLine;
	while (getline(cin, noteLine) && noteLine != "***")
	{
		int shift;
		cin >> shift;
		cin.ignore();

		stringstream ss(noteLine);
		string noteText;

		while (ss >> noteText)
		{
			int pitch = parseNote(noteText);

			int pitchIdx = (pitch - 1 + shift) % 12;
			if (pitchIdx < 0)
				pitchIdx += 12;

			cout << pitchNames[pitchIdx] << ' ';
		}

		cout << '\n';
	}

	return 0;
}