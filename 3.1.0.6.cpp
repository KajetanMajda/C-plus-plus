#include <iostream>
using namespace std;

int search(int n, int x)
{
	int A[10000];
	int b;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]:";
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] == x) 
		{
			b=i;
			return b;
		}
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
