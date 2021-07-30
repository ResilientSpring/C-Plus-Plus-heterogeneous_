// Returning a double value.

#include <iostream>
using namespace std;

// Use double data 
double box(double length, double width, double height) {
	return length * width * height;
}

int main(){
	double answer;

	answer = box(10.1, 11.2, 3.3);

	cout << "The volume is " << answer;

	return 0;
}
