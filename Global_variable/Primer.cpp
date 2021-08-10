#include <iostream>
using namespace std;

int main() {
	cout << "This program will help you multiply two numbers" << endl;

	cout << "Enter the first number: ";
	int first_number;
	cin >> first_number;

	cout << "Enter the second number: ";
	int secondNumber = 0;
	cin >> secondNumber;

	cout << first_number << ' x ' << secondNumber << ' = ' << first_number * secondNumber << '\n';
	cout << first_number <<  'x' << secondNumber << '=' << first_number * secondNumber << '\n';
	cout << first_number << " x " << secondNumber << " = " << first_number * secondNumber;

	return 0;
}