#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    if (n > 1)
    {
        int i = n;
        while (i > 1)
        {
            n = n * (i - 1);
            i--;
        }
        
    }
    
    cout << "Twoja silnia to: ";
    cout<<n;
    return 0;
}
