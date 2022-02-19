#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, tab[100][100], odl[100][100];

int main() {
    srand(time(NULL)); //generuje nam za kazdym raziem innego seeda by byly inne losowe liczby
    cout << "\e[45m\e[1mWitaj w progamie, ktory Ci pokaze najkrotsza droge :)\e[0m" << endl;
    cout << "Podaj szerokosc wierszy: ";
    if (!(cin >> n)) //wiersze
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Podaj wysokosc kolun: ";
    if (!(cin >> m)) //kolumny
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << " " << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            tab[i][j] = rand() % 9 + 1;
    for (int i = 0; i < n; i++) //pierwsza kolumna
        odl[i][0] = tab[i][0];
    for (int j = 1; j < m; j++)
        for (int i = 0; i < n; i++) {
            int x = odl[i][j - 1];
            if (i > 0)
                x = min(x, odl[i - 1][j - 1]);
            if (i < n - 1)
                x = min(x, odl[i + 1][j - 1]);
            odl[i][j] = x + tab[i][j];
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << tab[i][j] << " ";
        cout << " " << endl;
    }
    cout << " " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++);
        //cout<<odl[i][j]<<" ";
       //cout<<" "<<endl;
    }
    vector<int> ans;
    int j = m - 1, i = 0;
    int current = odl[i][j];
    for (int ii = 1; ii < n; ii++)
        if (odl[ii][j] < current) { //suka najmieszej odleglosci na ostatniej kolumnie
            current = odl[ii][j];
            i = ii;
        }
    ans.push_back(tab[i][j]);
    while (j > 0) {
        int ii = i;
        int best = odl[ii][j - 1];
        if (i > 0 && odl[i - 1][j - 1] < best) {
            best = odl[i - 1][j - 1];
            ii = i - 1;
        }
        if (i < n - 1 && odl[i + 1][j - 1] < best) {
            best = odl[i + 1][j - 1];
            ii = i + 1;
        }
        i = ii;
        j--;
        ans.push_back(tab[i][j]);
    }
    reverse(ans.begin(), ans.end()); // odwrotniosc wektora
    cout << "Twoja najkotsza sciezka prowadzi przez liczby: ";
    for (auto x : ans)
    cout << x<<" ";
    cout << " " << endl;
    cout << "Suma tych liczb wynosi: " << current<<endl;}
