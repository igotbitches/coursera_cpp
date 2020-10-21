#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& v){
    vector<int> num;
    for(int i = v.size() - 1; i >= 0; i--){
        num.push_back(v[i]);
    }
    return num;
}

int main(){
    vector<int> numbers = {1, 5, 3, 4, 2};
    for(auto i : Reversed(numbers)){
        cout << i << " ";
    }
    return 0;
}
