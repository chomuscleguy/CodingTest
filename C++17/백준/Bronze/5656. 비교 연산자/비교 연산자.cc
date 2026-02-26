#include <iostream>

using namespace std;

enum Op
{
	GT,
	GE,
	LT,
	LE,
	EQ,
	NE,
	INVALID
};

Op parseOp(const string& cmd)
{
	if (cmd == ">")  return GT;
	if (cmd == ">=") return GE;
	if (cmd == "<")  return LT;
	if (cmd == "<=") return LE;
	if (cmd == "==") return EQ;
	if (cmd == "!=") return NE;

	return INVALID;
}

bool calc(int a, Op op, int b)
{
	switch (op)
	{
	case GT: return a > b;
	case GE: return a >= b;
	case LT: return a < b;
	case LE: return a <= b;
	case EQ: return a == b;
	case NE: return a != b;
	default: return false;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	string cmd;

	int index = 0;

	while (cin >> a >> cmd >> b)
	{
		index++;

		Op op = parseOp(cmd);

		if (op == INVALID)
			continue;

		cout << "Case " << index << ": " << (calc(a, op, b) ? "true" : "false") << '\n';
	}

	return 0;
}