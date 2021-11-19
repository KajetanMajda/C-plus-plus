#include <iostream>
using namespace std;

void parametr(int a, int b)
{
	cout << a * 2 << endl;
	cout << b + 100;
}

int main()
{
	int a, b;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	parametr(a, b);
	return 0;
}
