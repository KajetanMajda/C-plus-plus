#include <iostream>
#include <string>

using namespace std;

string slowo = "Hello, World!";
string* tekst = &slowo;

void print(string a)
{
	cout << &a << "=" << a << "\n";
}
int main()
{
	print(*tekst);
	return 0;
}