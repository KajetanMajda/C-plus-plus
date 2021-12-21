#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
	string imie, nazwisko;
	imie = argv[1];
	nazwisko = argv[2];
	cout << "adres zmiennych: " << &imie << " " << &nazwisko << endl;
	cout << "wartości zmiennych: " << imie << " " << nazwisko << endl;
	cout << "rozmiar zmiennej: " << sizeof(imie) << " " << sizeof(nazwisko) <<endl;
	cout << "adres wskaźnika: " << &argv[1] << endl;
	cout << "wartość wskaźnika: " << sizeof(char*) << endl;
}
