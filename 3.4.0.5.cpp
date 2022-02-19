#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void CopyTableToVector(int tab[100][8]) 
{
	vector <int> wek;
	for (int i = 0; i < 100; i++) 
	{
		if (i % 5 == 0) //24807 nie daje reszty wiec przymuje ze modulo z 5 bedzie rowne 0
		{
			for (int j = 0; j < 8; j++) 
			{
				int a = tab[i][j];
				wek.push_back(a);
			}
		}
	}
	cout << wek[wek.size() -1] << endl;
}
int main() 
{
	srand(time(NULL));
	
	int tab[100][8];
	for (int i = 0; i < 100; i++) 
	{ 
		for (int j = 0; j < 8; j++) 
		{
			tab[i][j] = (rand() % 100);
		}
	}

	CopyTableToVector(tab);

	return 0;
}