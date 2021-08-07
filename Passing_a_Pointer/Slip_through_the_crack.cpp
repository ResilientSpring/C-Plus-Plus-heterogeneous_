// Pass a pointer to a function.
#include <iostream>
using namespace std;

void f(int *j);

int main() {

	int i;
	int* p;

	p = &i;

	f(p); // pass a pointer. 

}

// f() receives a pointer to an int. 
void f(int *j) {
	*j = 100; // var pointed to by j is assigned 100.
}