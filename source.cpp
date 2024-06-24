//Isaac Opata
//June 24, 2024

#include <iostream>
using namespace std;

const int SIZE = 10;

bool listSearch(const long[], int, long);

int main()
{
	long tickets[SIZE] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
	long winNumber;

	cout << "Enter five digist winning number: ";
	cin >> winNumber;

	if (listSearch(tickets, SIZE, winNumber))
		cout << "Your ticket is the winner!\n";
	else
		cout << "Your ticket is not the winner.\n";

	return 0;
}

bool listSearch(const long list[], int numElements, long value)
{
	bool found = false;

	for (int i = 0; i < numElements && !found; i++)
	{
		if (list[i] == value)
			found = true;
	}

	return found;
}