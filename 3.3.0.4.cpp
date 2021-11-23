#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int liczba[100000];
	cout << "Ilosc elentow tablicy A --> ";
        cin >> n;

	float srednia = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]:";
		cin >> liczba[i];
		srednia = srednia + liczba[i];
	}
	srednia = srednia / n;
	cout << "Twoja srednia wynosi: " << srednia << endl;

	return 0;
}
