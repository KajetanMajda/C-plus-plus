#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Program do wykazywania wartosci absolutnej podanej liczby przez uzytkowanika" << endl;
	cout << "Podaj liczbe: ";
	cin >> a;
	cout << "Twoja wartosc absolutna to: ";
	if (a >= 0)
	{
		cout << a;
	}
	else
	{
		cout << a * -1;
	}
	return 0;
}
