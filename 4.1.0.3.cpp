#include <iostream>
#include <vector>
using namespace std;
struct student{
    string imie;
    string nazwisko;
    vector<double> oceny;
};
double average_of(struct student s){
    double sr = 0;
    for (auto const i : s.oceny){
        sr = sr + i;
    }
    return sr / s.oceny.size();
}
struct student get_best_student(std::vector<struct student> s){
    double b = 0;
    struct student naj;
    for (auto const i : s) {
        auto tmp = average_of(i);
        if (b < tmp) {
            b = tmp;
            naj = i;
        }
    }
    return naj;
}
int main(){
    vector<double> A{ 2, 3, 4, 5, 4 };
    vector<double> B{ 4, 5, 2, 3, 3 };
    vector<double> C{ 3, 5, 5, 5, 4 };
    struct student pierwszy {"a","a",A };
    struct student drugi {"b","b",B };
    struct student trzeci {"c","c",C };
    std::vector<struct student> s;
    s.push_back(pierwszy);
    s.push_back(drugi);
    s.push_back(trzeci);
    for (auto const i : s) {
        cout << "Srednia studenta to  " << i.imie << ": " << average_of(i) <<endl;
    }
    cout << "Najlepszy student to: " << get_best_student(s).imie <<endl;
    
}
