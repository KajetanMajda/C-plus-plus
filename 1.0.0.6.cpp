#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a == b)
	{
		cout << a;
		cout << " == ";
		cout << b;
	}
	if(a>b)
	{
		cout << a;
		cout << " > ";
		cout << b;
	}
	if(a<b)
	{
		cout << a;
		cout << " < ";
		cout << b;
	}

	return 0;
}
