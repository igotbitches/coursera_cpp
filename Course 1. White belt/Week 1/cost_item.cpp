#include <iostream>
using namespace std;

int main(){
	
	double n, a, b, x, y;
	cin >> n >> a >> b >> x >> y;
//	n = 115;
//	a = 110;
//	b = 120; 
//	x = 5;
//	y = 10;

	
	if (n > b){
		cout << n - (n * y / 100);
	}
	else if (n > a){
		cout << n - (n * x / 100);
	}
	else{
		cout << n;
	}
	
	return 0;
}


// also good decision

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    double n, a, b, x, y;
//    cin >> n >> a >> b >> x >> y;
//    if (n > b) {
//        n *= (1 - y / 100);
//    } else if (n > a) {
//        n *= (1 - x / 100);
//    }
//    cout << n;
//
//    return 0;
//}
