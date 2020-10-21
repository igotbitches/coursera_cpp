#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	
	if (a != 0){
		double discr = pow(b, 2) - 4 * a * c;
		
		if (discr < 0){
		cout << " ";
		} 
		else if (discr >= 0) {
			double x1 = (-b + (sqrt(discr))) / (2 * a);
			double x2 = (-b - (sqrt(discr))) / (2 * a);
			
			if (x1 == x2){
				cout << x1;
			}
			else{
				cout << x1 << " " << x2;
			}
		}
	}
	else if (b != 0){
		cout << -1 * c / b;
	}
	
	return 0;
}


