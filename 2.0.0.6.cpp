#include <iostream>
#include <string>
using namespace std;

string relation(int a, int b)
{
    if (a == b)
    {
        return "==";
    }
    if (a < b)
    {
        return "<";
    }
    if (a > b)
    {
        return ">";
    }
    return "error";
}

string loop(int s)
{
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cout << "podaj wyraz[" << i << "]"; 
        cin >> a[i];
    }
    for (int i = 0; i < s; i++)
    {
        cout << a[0] << relation(a[0], a[i]) << a[i] <<endl;
    }
    return " ";
}

int main()
{
    int s;
    cout << "Podaj s: "; 
    cin >> s;
    loop(s);
    return 0;
}
