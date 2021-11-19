#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<char,127> ascii;
	for(int i=33;i<=126;i++)
	{
		ascii[i]=i;
		cout<<ascii[i];
	}
	cout<<"\n";
	return 0;
}
