#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Program wypisujacy najwieksza liczbe z podanych" << endl;
	cout << "Podaj 1 liczbe" << endl;
	cin >> a;
	cout << "Podaj 2 liczbe" << endl;
	cin >> b;
	cout << "Najwieksza podana liczba to: ";
	if (a > b)
	{
		cout << a;
		}
	else
	{
		cout << b;
	}

	return 0;
}
