#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Podaj wysokosc prostakata ";
    cin >> a;
    cout << "Podaj dlugosc prostokata ";
    cin >> b;
    for (int i = a; i > 0; i--)
    {
        for (int i = b; i > 0; i--)
        {
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}
