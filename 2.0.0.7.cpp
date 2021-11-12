#include <iostream>
using namespace std;

int sum_limit(int a, int b)
{
    int c[100];
    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        c[i] = i;
        if (c[i] % b == 0 && c[i] > 0)
        {
            sum = sum + c[i];
        }
    }
    return sum;
}

int main()
{
    int a, b;
    cout << "Podaj limit ";
    cin >> a;
    cout << "Podaj dzielnik ";
    cin >> b;
    cout << "Suma wynosi: " << sum_limit(a, b);
    return 0;
}
