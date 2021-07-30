#include <iostream>
using namespace std;

void f1() {
	int val = 88; // This val is local to f1().
	cout << "val in f1(): " << val << '\n';
}

int main() {
	int val = 10; // This val is local to main().

	cout << "val in main(): " << val << '\n';
	f1();
	cout << "val in main(): " << val << '\n';

	return 0;
}