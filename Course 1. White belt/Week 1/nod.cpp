#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	do {
		if(a > b){
			a %= b;
		}
		else {
			b %= a;
		}
	}while(a != 0 && b != 0);
	
	cout << a + b;
	
	return 0;
}
