#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& numbers){
    vector<int> num = {};
    for(int i = numbers.size() - 1; i >= 0; i--){
        num.push_back(numbers[i]);
    }
    numbers = num;
}

int main(){
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    for(auto i : numbers){
        cout << i << " ";
    }
    return 0;
}

//use CLion
