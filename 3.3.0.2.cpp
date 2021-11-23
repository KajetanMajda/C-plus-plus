#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void objetosc(float H, float r, float R)
{
    
    if (r < R)
    {
        float V;
      
        V = 0.33 * 3.14 * H * ((pow(r,2)) + (r * R) + (pow(R,2)));
        cout<<"Twoja objetosc to: " << V <<endl;
    }
    else
    {
        cout << "(r < R) Podaj inne liczby" << endl;
    }
    
   
}


int main()
{
    float r, H, R;
    while (true) {
        

            cout << "Podaj H: ";
            if (!(cin >> H)) {
                cin.clear();// to czysli flagi
                cin.ignore(numeric_limits<streamsize>::max(), '\n');//czysci caly ztrumien wchodzacy zeby nie bylo zlego inta np a na liczbie 1
                continue;
            }
            
            cout << "Podaj R: ";
            if (!(cin >> R)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            cout << "Podaj r: ";
            if (!(cin >> r)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if ((H > 0) || (R > 0) || (r > 0))
            {
                
                continue;
            }
        

        objetosc(H, r, R);
    }
    return 0;
}
