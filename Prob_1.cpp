#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int j;
	double number[10];
	float sum = 0, s, l;

	cout << "Enter 10 numbers: " << endl;

	for (j = 0; j < 10; j++)
	{
		cin >> number[j];

			if (j == 0)
		{
			s = number[j];
			l = number[j];
	}
	else
	{
		if (number[j] < s)
			s = number[j];
		if (number[j] > l)
			l = number[j];
	}


	sum += number[j];
}

	cout << "Smallest Number = " << s << endl;
	cout << "Largest Number = " << l << endl;
	cout << "Total: " << sum << endl;
	cout << "Average = " << sum / 10 << endl;


	_getch();
	return 0;

}

