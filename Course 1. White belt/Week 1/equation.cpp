#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int discr = pow(b, 2) - 4 * a * c;
	
	if (discr < 0){
		cout << " ";
	}
	else if (discr == 0){
		cout << -b / (2 * a);
	}
	else {
		cout << (-b + (sqrt(discr))) / (2 * a) << " " << (-b - (sqrt(discr))) / (2 * a);
	}
	
	return 0;
}
