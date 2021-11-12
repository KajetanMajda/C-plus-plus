#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n > 1)
    {
        for (int i = n; i > 1; i--)
        {
            n = n * (i - 1);
        }
          
    }
    cout << "Twoja silnia to: ";
    cout << n;
     return 0;
}
