// Laba4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "******Labaratorna robota 4******\n";
	cout << "*******Month_Array*******\n";
	string month[12] = { "January", "Fabruary","March","April", "May", "June", "July", "August", "September", "October", "November", "December" };
	char exOrwhat = 'c';
	while (true)
	{
		cout << "Enter(c) to display month! Enter (q) for exit!\n ";
		cin >> exOrwhat;
		if (toupper(exOrwhat) == 'Q') {
			break;
		}
		for (int i = 0; i < sizeof(month) / sizeof(month[0]); i++)
		{
			(double)(i % 3) == 0 ? cout << "\n" : cout << " ";
			cout << month[i];

		}

		cout << "\n \nEnter a number of the Month you want to replace: \n";
		int numMonth;
		cin >> numMonth;
		cout << "You wanna change " << month[numMonth - 1] << " to: \n";
		cin >> month[numMonth - 1];

	}
}
