#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, int> b = {{"a", 1}, {"b", 2}, {"c", 3}};
	string keys;
	int sum = 0;

	for (auto i : b) {
		keys += i.first;
		sum += i.second;
	}

	cout << keys << endl << sum;

	return 0;
}
