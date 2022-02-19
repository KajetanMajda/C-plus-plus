#include <iostream>
#include <string>

using namespace std;

void swap(int* a, int* b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}



int main()
{
	int a, b;
	cout << "Podaj 1 liczbe ";
	cin >> a;
	cout << "Podaj 2 liczbe ";
	cin >> b;
	cout << "Przed zamiana ";
	cout << a << " " << b << endl;
	swap(a, b);
	cout << "Po zamianie ";
	cout << a << " " << b << endl;

	system("pause");
	return 0;

}