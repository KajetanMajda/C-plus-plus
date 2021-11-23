#include <iostream>
#include <string> 
#include <math.h>
using namespace std;

void poczatek()
{
	cout << "Program liczacy pola wybranych figur takich jak :" << endl;
	cout << " " << endl;
	cout << "Pole trojkata --> 0" << endl;
	cout << "Pole prostokata --> 1" << endl;
	cout << "Pole kola --> 2" << endl;
	cout << "Pole trapeza --> 3" << endl;
	cout << "Pole szesciokata foremnego --> 4" << endl;
	cout << " " << endl;
	cout << "Podaj ktorej figury pole chcesz policzyc --> ";
}

int main()
{
	while (true)
	{
		poczatek();

		int l;
		cin >> l;
		cout << " " << endl;
		if (l == 0)
		{
			float P, a, b; //trojkat
			cout << "Podaj a: ";
			if (!(cin >> a))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Podaj wysokosc: ";
			if (!(cin >> b))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Twoje pole wysoni: ";
			P = (a * b) / 2;
			if ((a > 0) && (b > 0))
			{
				cout << P << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
			
		}
		else if (l == 1)
		{
			float P, a, b; //prostokat
			cout << "Podaj a: ";
			if (!(cin >> a))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Podaj b: ";
			if (!(cin >> b))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Twoje pole wysoni: ";
			P = (a * b);
			if ((a > 0) && (b > 0))
			{
				cout << P << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (l == 2)
		{
			float P, a, r; //kolo
			cout << "Podaj a: ";
			if (!(cin >> a))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Podaj promien: ";
			if (!(cin >> r))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Twoje pole wysoni: ";
			P = 3.14 * (pow(r,2));
			if ((a > 0) && (r > 0))
			{
				cout << P << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (l == 3)
		{
			float P, a, b, h; //trapezu
			cout << "Podaj a: ";
			if (!(cin >> a))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Podaj b: ";
				if (!(cin >> b))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Podaj wysokosc: ";
			if (!(cin >> h))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Twoje pole wysoni: ";
			P = ((a + b) * h) / 2;
			if ((a > 0) && (b > 0) && (h>0))
			{
				cout << P << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (l == 4)
		{
			float P, a, r; //szesciokat foremny
			cout << "Podaj a: ";
			if (!(cin >> a))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			cout << "Twoje pole wysoni: ";
			P = ((3 * pow(a, 2)) * sqrt(3)) / 2;
			if (a > 0)
			{
				cout << P << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		cout << " " << endl;
		int z;
		cout << "Powrot do ponownego wyboru figury --> 5" << endl;
		cout << "Koniec programu --> 6" << endl;
		cout << "Podaj znak --> ";
		cin >> z;
		if (z == 5)
		{
			cout << " " << endl;
		}
		else if(z==6)
		{
			return 0; //to dziala 
		}
		if ((z < 5) || (z > 6))
		{
			cout << "Podaj liczbe taka jaka jest napisana a nie klikasz bezsensownie w klawiature" << endl;
		}
	}
	return 0;
}
