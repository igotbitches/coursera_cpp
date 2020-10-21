#include <iostream>

using namespace std;

int Factorial(int n){
	int counter = 1;
	if (n <= 0){
		return 1;
	}else{
		while (n != 0){
			counter *= n;
			n -= 1;
		}
		
	}
	return counter;
}

int main(){
	int a;
	cin >> a;	
	cout << Factorial(a);
	
	return 0;
}
