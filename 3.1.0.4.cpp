#include <iostream>
using namespace std;

int main()
{
	int n;
	int A[n];
	int s = 0;
	cout << "podaj liczbe elemntow tablicy A: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "podaj A[" << i << "]:"; cin >> A[i];
		s = s + A[i];
	}
	cout << "suma:"; 
	
	cout << s << endl;
	return 0;
}
