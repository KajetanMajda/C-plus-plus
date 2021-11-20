#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;
	for (int i = 3; i < a; i++)
	{
		if (a % i == 0)
		{
			cout << "Podana liczba nie jest liczba pierwsza :(" << endl;
			return 0;
		}
	}
	cout << "Podana liczba jest liczba pierwsza :)" << endl;
	return 0;
}
