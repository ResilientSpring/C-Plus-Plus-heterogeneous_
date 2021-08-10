#include <iostream>
using namespace std;

int main() {
	int fallout[5] = { 1, 2, 3, 4, 5 };

	int max = 0;

	for (int i = 0; i < sizeof(fallout); i++)
	{
		if (fallout[i] > max)
		{
			max = fallout[i];
		}

		cout << fallout[i] << " ";
	}

	cout << "The maximum element of the array is " << max << "\n";
	cout << "The array size is " << sizeof(fallout);

	return 0;
}

// sizeof() is not utilized to count the size of an array.[1][2]

// References: 
// 1. https://en.cppreference.com/w/cpp/language/sizeof
// 2. https://www.tutorialspoint.com/cplusplus/cpp_sizeof_operator.htm
