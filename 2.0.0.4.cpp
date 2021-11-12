#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;

	if (a == 2 || a == 3 || a == 5 || a == 7)
	{
		cout << "Podana liczba jest liczba pierwsza" <<endl;
	}
	else if (a == 0 || a == 1 || a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
	{
		cout << "Podana liczba nie jest liczba pierwsza" <<endl;
	}
	else
	{
		cout << "Podana liczba jest liczba pierwsza" <<endl;
	}
	return 0;
}
