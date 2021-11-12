#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	cout << " " << endl;
	for (int i = a; i <= b; i++)
	{
		if(i%4==0)
		cout << i << endl;
	}

	cout << " " << endl;

	return 0;
}
