#include <iostream>

using namespace std;

int choice, value1, value2, result;

int main()
{
	while (true) {
		cout << "\nPlease enter the first number: ";
		cin >> value1;
		cout << "\nPlease enter the second number: ";
		cin >> value2;

		cout << "1. Add\n" <<
			"2. Multiply\n" <<
			"Which operation would you like to do? ";
		cin >> choice;

		if (choice == 1)
			result = value1 + value2;
		else if (choice == 2)
			result = value1 * value2;

		cout << "\nThe result is : " << result << "\n\n";
	}
}