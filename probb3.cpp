#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	char elements[200], s;

	cout << "Enter elements: ";
	cin.getline(elements,200);

	s=strlen(elements);
	cout << "The array of elements in reverse: ";
		for (int i = s; i >= 0; i--)
	{
		cout << elements[i];
	}
	cout << " "<< endl;
	cout << "The size of the array is: " << strlen(elements) << endl;
	system("pause");

	_getch ();
	return 0;
}