#include <iostream>
using namespace std;
auto fSum(double (*f)(double), int n, int m) -> double {
double s;
cout << "n: " << n << " m: " << m <<endl;
for (int i = n; i <= m ; i++){
	s= s + (*f)( i);
	}
return s;
}

double other_function (double k){
return k;
}

int main(){
double m,n;
cout << "Podaj m";
cin >> m;
cout << "Podaj n";
cin >> n;  

	double (*fp) (double);
	fp = &other_function;
	cout << fSum(*fp, m, n) << "\n";
return 0;
}
