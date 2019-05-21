#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int Province[7], Day[7], temp[7], tempe[7], tempera[7];

		cout << "Enter all temperature for a week of Province A, Province B and then Province C. \n";

			for (int i = 0; i < 7; i++)
			{
				cout << "Province A" << ", Day " << i + 1 << ": ";
				cin >> temp[i];
			}
		
			for(int i = 0; i < 7; i++)
			{
				cout << "Province B" << ", Day " << i + 1 << ": ";
				cin >> tempe[i];
			}
		
			for(int i = 0; i < 7; i++)
			{
				cout << "Province C" << ", Day " << i + 1 << ": ";
				cin >> tempera[i];
			}


    cout << "Displaying Values: " << endl;

     for(int i = 0; i < 7; ++i)
			{
				cout << "Province A" << ", Day " << Day[i] << " = " << temp[i] << endl;
			}
		for(int j = 0; j < 7; ++j)
			{
				cout << "Province B" << ", Day " << Day[i] << " = " << tempe[i] << endl;
			}
		for(int i = 0; i < 7; i++)
        {
            cout << "Province C" << ", Day " << Day[i] << " = " << tempera[i] << endl;
        }
    

    _getch();
	return 0;
}