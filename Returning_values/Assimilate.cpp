// Return a value.

#include <iostream>
using namespace std;

// This function returns a value
int box(int length, int width, int height) {
	return length * width * height;
}

int main() {
	int answer;

	answer = box(10, 11, 3);
	cout << "The volume is " << answer;

	return 0;
}