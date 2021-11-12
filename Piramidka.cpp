#include <iostream>
using namespace std;

int main()
{
    int space, h, a, o;
    a = 1;
    cout << "h: ";
    cin >> h;
    o = h;

    for (int i = 1, k = 0; i <= h; i++, k = 0)
    {
        for (space = 0; space <= h-i; space++)
        {
            cout << "-";
        }

        while (k != 2 * i - 1)
        {
            cout << "#";
            k++;
        }
        for(int j=o;j>=a;j--)
        {
           
            cout << "-";
        }
        o--;
        cout << endl;
    }
    return 0;
}
