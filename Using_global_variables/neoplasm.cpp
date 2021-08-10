#include <iostream>
using namespace std;

// three global integers 
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers() {
	cout << "Enter the first number: ";
	cin >> firstNumber;
	cout << "Enter the second number: ";
	cin >> secondNumber;

	multiplicationResult = firstNumber * secondNumber;

	cout << "Display from MultiplyNumbers(): ";
	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;
}

int main() {
	cout << "This program will help you multiply two numbers" << '\n';

	MultiplyNumbers();

	cout << "Display from main(): "; 

	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;

	return 0;
}