#include <iostream>
using namespace std;

int main()
{
	const int max = 100;
	int tablica[max] = {};
	int n;
	cout << "Podaj n: "; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << tablica[i];
	}
	return 0;
}
