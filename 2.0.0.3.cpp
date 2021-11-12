#include <iostream>
using namespace std;



int main()
{
	int a, b, c, s;
	cin >> a;
	cin >> b;
	cin >> s;
	c = a;
	while (c >= a && c < b)
	{
		cout << c << endl;
		c = c + s;
	}
	return 0;
}
