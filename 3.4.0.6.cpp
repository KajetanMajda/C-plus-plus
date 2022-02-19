#include <cstring>
#include <iostream>
using namespace std;
void MemSet(int s, int c, int n)
{
	char tab[100];
	if (s > 100)
		cerr << "Tablica operuje do 100 podaj liczbe mniejsza od 100"<<endl;
	if (s > c)
		cerr << "Error"<<endl;

	for (int i = 0; i < c; i++)
	{
		tab[i] = n;
		cout << tab[i];
		cout << " "<<endl;
	}
}

int main(int argc, char *argv[])
{
	if (argc < 4)
		cerr << "Podaj wiecej danych"<<endl;
	else if (argc == 4)
	{
		int s = atoi(argv[1]);
		int c = atoi(argv[2]);
		int n = atoi(argv[3]);

		MemSet(s, c, n);
	}
	else
		cerr << "Podaj mniej danych"<<endl;

	return 0;
}
