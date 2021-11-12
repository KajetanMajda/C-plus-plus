#include <iostream>
using namespace std;
int main()
{
	int tabA[50];
	int k;
	cout << "Podaj liczbe k "; 
	cin >> k;
	for (int i = 0; i < 50; i++)
	{
		tabA[i] = { rand() % (k + 1) };
		cout << "tabA[" << i << "] " << tabA[i] << endl;
	}
	return 0;
}
