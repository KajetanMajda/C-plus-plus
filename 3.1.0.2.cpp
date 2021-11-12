#include <iostream>
using namespace std;

int main()
{
	int a, n, s;
	cout << "Twoja liczba zero --> ";
	cin >> s;
	cout << "Twoj rozmiar tabeli -->";
	cin >> n;

	int tablicaA[n];
	tablicaA[0] = s;

	for (int i = 0; i < n; i++)
	{
		cout << tablicaA[i] << endl;
		tablicaA[i + 1] = tablicaA[i] + 1;
	}


	return 0;
}
