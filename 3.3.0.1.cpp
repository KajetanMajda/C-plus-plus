#include<iostream>
using namespace std;

void poczatek(int a)
{
	cout << "--------------------"<<endl;
}

void srodek1(int b)
{
	cout << "I***   ***   ***   I"<<endl;
}

void srodek2(int c)
{
	cout << "I   ***   ***   ***I"<<endl;
}

int main()
{
	int a, b, c, d;
	poczatek(a);
	srodek1(b);
	srodek1(b);
	srodek2(c);
	srodek2(c);
	srodek1(b);
	srodek1(b);
	srodek2(c);
	srodek2(c);
	poczatek(a);

	return 0;
}
