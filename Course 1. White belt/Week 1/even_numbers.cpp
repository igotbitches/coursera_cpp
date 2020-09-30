#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	if (a >= 1 && a <= b){
		int i = a;
		while (i <= b){
			if (i % 2 == 0){
				cout << i << " ";
			}
			++i;
		}
	}
	
	return 0;
}


// one more decision
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//    for (int i = a; i <= b; ++i) {
//        if (i % 2 == 0) {
//            cout << i << ' ';
//        }
//    }
//    return 0;
//}
