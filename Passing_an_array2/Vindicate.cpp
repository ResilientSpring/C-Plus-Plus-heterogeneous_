#include <iostream>
using namespace std;

void mininum(int num[]) {

	int min = 0;

	for (int i = 0; i < sizeof(num); i++)
	{
		if (num[i] < min)
		{
			min = num[i];
		}
		
	}

	cout << "The minimum element of the array is " << min;
}

int main() {
	int syndicate[10];

	for (int i = 0; i < 10; i++)
	{
		syndicate[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << syndicate[i] << " ";
	}

	mininum(syndicate);

	return 0;
}