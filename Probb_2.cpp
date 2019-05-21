#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	const int Province = 3;
	const int Day = 7;
	char province[3][3] = {"A", "B", "C"};
	int temp[Province][Day];

	cout << "Enter all temperature for a week of Province 1, Province 2 and Province 3. ";
	cout << endl;


	for (int p = 0; p < Province; ++p)
	{
	for (int d = 0; d < Day; ++d)
		{
	cout << "Province " << province[p] << ", Day " << d + 1 << " : ";
	cin >> temp[p][d];
		}
	}

	cout << endl;

	cout << endl;

	cout << "Displaying Values: ";
	cout << endl;

	for (int p = 0; p < Province; ++p)
	{
	for (int d = 0; d < Day; ++d)
	{
		cout << "Province " << p + 1 << ", Day " << d + 1 << " = " << temp[p][d] << endl;
	}
	}

	system ("pause");
	_getch();
	return 0;

}