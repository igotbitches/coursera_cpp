#include <iostream>
#include <string>
#include <vector>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination){
    for(auto& i : source){
        destination.push_back(i);
    }
    source.clear();
}

int main(){
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    cout << "Source: " << source.size() << endl << "Destination: " << destination.size();

    return 0;
}

//don't work in Dev-C++
//Use CLion
