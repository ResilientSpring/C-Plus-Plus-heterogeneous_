// Variable can be local to a block.

#include <iostream>
using namespace std;

int main() {
	int x = 19; 

	if (x == 19) {
		int y = 20;  // y is local to the if block.
		cout << "x + y is " << x + y << '\n';
	}

	// y = 100;  error! y not known here.

	return 0;
}