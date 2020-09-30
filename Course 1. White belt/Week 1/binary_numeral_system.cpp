#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string dsustem = "";
	
	while (n != 0){
		if (n % 2 == 0){
			n /= 2;
			dsustem += "0";
		}
		else {
			n /= 2;
			dsustem += "1";
		}
	}
	
	reverse(dsustem.begin(), dsustem.end());
	cout << dsustem;
	
	return 0;
}
