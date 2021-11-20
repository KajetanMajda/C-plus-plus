#include <iostream>

using namespace std;
const int MAX = 64;
int A[MAX];
int p = 0;
int q = MAX - 1;
int pivot;

void random_table(int n)
{
	cout << "Tablica pseudolosowych znaków w zakresie od 0 do n:" <<endl;
	for (int i = 0; i < MAX; i++)
	{
		A[i] = (rand() % (n + 1) + 0);
		cout << A[i] << " ";
	}
	cout << endl;
}

void quick_sort(int p, int q)
{
	int i, j, pivot;
	i = (p + q) / 2;
	pivot = A[i];
	A[i] = A[q];
	for (j = i = p; i < q; i++)
	{
		if (A[i] < pivot)
		{
			swap(A[i], A[j]);
			j++;
		}
	}
	A[q] = A[j];
	A[j] = pivot;
	if (p < j - 1)  quick_sort(p, j - 1);
	if (j + 1 < q) quick_sort(j + 1, q);
}

void sorted_table()
{
	cout << "Posortowana tablica od najmniejszych do njwiekszych: " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
int main()
{
	int n;
	cout << "Podaj do jakiej liczby od 0 maja byc losowane podane liczby przez uzytkownika: "; 
	cin >> n;
	random_table(n);
	quick_sort(p, q);
	sorted_table();
	return 0;
}
