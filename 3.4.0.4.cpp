#include <iostream>
#include <cmath>

using namespace std;

void cone(double h, double P, double* V, double* pp) 
{
    *pp = 3.14 * P * P;
    *V = ((*pp) * h) / 3;
}

int main() 
{
    double h = 20;
    double P = 3.5; 
    double V, pp;
    cone(h, P, &V, &pp);
    cout << "Twoja objetosc: " << V <<endl; 
    cout << "Twoje pole podstawy: " << pp << endl;

    return 0;
}