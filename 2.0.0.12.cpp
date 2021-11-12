#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int a;
    string b;
    cout << "Podaj wysokosc trojkata ";
    cin >> a;
    
    for (int i = a; i > 0; i--)
    {
        b = b + "*";
        cout << b;
        cout << endl;
    }
    
    return 0;
}
