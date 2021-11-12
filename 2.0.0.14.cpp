#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Podaj wysokosc i szerokosc kwadratu";
	cin >> a;
	cin >> b;

	if (a >= 3 && b >= 3)
	{
		for (int i = a; i > 0; i--)
		{
			if (i == a || i == 1)
			{
				for (int i = b; i > 0; i--)
				{
					cout << "*";
				}
			}
			else
			{
				for (int i = b; i > 0; i--)
				{
					if (i == b || i == 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
	else cout << "zmien liczby a nie podajesz takie male";

	
	return 0;
}


