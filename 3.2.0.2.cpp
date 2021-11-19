#include <iostream>
#include <vector>
using namespace std;

vector<int> number;
int a;
void insert_table(int a)
{
	number.push_back(a);
}
void show_table()
{
	for(int i=0;i< number.size() ;i++)
	{
	if(i%5==0)
		{
		cout<<number[i]<<"\n";
		}
	else
		{
		cout<<"	"<<number[i]<<"	";
		}
	}
	cout<<"\n";
}
int main()
{
	do
	{
	cin>>a;
	insert_table(a);
	}
	while(a!=0);
	show_table();
	return 0;
}
