#include <iostream>
using namespace std;

int max2(int a, int b)
{
    if (a > b) 
    {
        return a;
    }
    else
    {
        return b;
    }
}
int max3(int max, int c)
{
    if (max < c)
    {
        return c;
    }
    else
    {
        return max;
    }
}
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int max = max2(a, b);
    cout << max<<endl;
    int maksimum = max3(max, c);
    cout << maksimum << endl;
    return 0;  
}
