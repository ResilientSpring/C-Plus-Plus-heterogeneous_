// Change the contents of an array using a function. 
#include <iostream>
using namespace std;

void cube(int* n, int num);

int main() {
	int i, nums[10];

	for ( i = 0; i < 10; i++)
	{
		nums[i] = i + 1;
	}

	cout << "Original contents: ";
	for (i = 0; i < 10; i++)
	{
		cout << nums[i] << " " << "\n";
	}

	cube(nums, 10);	// Pass address of nums to cube().

	cout << "Altered contents: ";

	for ( i = 0; i < 10; i++)
	{
		cout << nums[i] << " ";
	}

	return 0;

}

// Cube the elemtns in an array.
void cube(int* n, int num) {
	while (num)
	{
		*n = *n * *n * *n;  // This changes the value of the array element pointed to by n.
		num--;
		n++;
	}
}