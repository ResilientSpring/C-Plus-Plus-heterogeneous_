#include <iostream>
using namespace std;

void power(int base, int exp, char c);

int main() {
	power(10, 2, 'a');
	power(10, -2, 'b');
	return 0;
}

// Raise an integer to a positive power.
void power(int base, int exp, char c) {
	int i;

	int count = exp;

	if (exp < 0) return;  // Can't do negative exponents.

	i = 1;

	for (; exp; exp--) i = base * i;
	cout << "The answer is " << i;

	switch (c)
	{
	case 'a': return;
	case 'b': cout << "Preeminent.";
	case 'c': return;

	default:
		break;
	}

	if (count < 100) return;
}
