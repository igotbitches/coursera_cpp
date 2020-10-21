#include <iostream>
#include <vector>

using namespace std;

int main(){
    int days = 0;
    int average;
    int sum = 0;
    cin >> days;
    vector<int> temperature(days);

    for(auto& i : temperature){
        cin >> i;
        sum += i;
    }
    average = sum / days;

    vector<int> moreThanAverage;
    for(int i = 0; i < temperature.size(); i++){
        if(temperature[i] > average){
            moreThanAverage.push_back(i);
        }
    }

    cout << moreThanAverage.size() << endl;
    for (auto j : moreThanAverage){
        cout << j << " ";
    }

    return 0;
}

