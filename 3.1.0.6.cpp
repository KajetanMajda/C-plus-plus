#include <iostream>
using namespace std;

int search(int n, int x)
{
	int A[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]:";
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] == x) return x;
	}
	return -1;
}

int main()
{
	int n, x;
	cout << "Ilosc elentow tablicy A --> ";
	cin >> n;
	cout << "Szukana wartosc --> "; 
	cin >> x;
	cout << search(n, x) << endl;
	return 0;
}
