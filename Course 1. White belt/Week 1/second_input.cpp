#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	cin >> a;
	
	
	int counter = 0;
	
	for(int i = 0; i < a.size(); i++){
		if (a[i] == 'f'){
			if (counter == 1){
				++counter;
				cout << i;
				break;
			}else {
				++counter;
			}
		}
	}
	
	if (counter <= 1){
		if (counter == 1){
			cout << -1;
		}else {
			cout << -2;
		}
	}
	
	
	return 0;
}
