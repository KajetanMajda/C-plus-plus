#include <iostream>
using namespace std;

void min_max(int n)
{
	int A[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]:"; cin >> A[i];
	}
	int min = A[0];
	int max = A[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i] < A[j] && A[i] <= min) min = A[i];
			if (A[i] < A[j] && A[j] <= min) min = A[j];
			if (A[i] > A[j] && A[i] >= max) max = A[i];
			if (A[i] > A[j] && A[j] <= min) min = A[j];
		}
	}
	cout << "MIN: " << min << endl;
	cout << "MAX:" << max << endl;
}

int main()
{
	int n;
	cout << "Podaj ilosc zawartych elementow dla tablicy A "; 
	cin >> n;
	min_max(n);
	return 0;
}
