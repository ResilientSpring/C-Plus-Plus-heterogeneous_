#include <iostream>
using namespace std;

void func1();
void func2();

int count;  // This is a global variable. 

int main() {
	int i; // This is a local variable.

	for (int i = 0; i < 10; i++)
	{
		
	}
}


void func1() {
	cout << "count: " << count;  // This also refers to the global count.
}
