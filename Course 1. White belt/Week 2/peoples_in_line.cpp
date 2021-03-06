#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    struct Person{
        bool worry;
        bool quite;
    };

    int Q;
    cin >> Q;
    vector<Person> personVector;

    for(int i = 0; i < Q; i++){
        string command;
        cin >> command;
        int number;
        if(command == "WORRY"){
            cin >> number;
            personVector[number].worry = true;
        }
        else if(command == "QUIET"){
            cin >> number;
            personVector[number].worry = false;
            personVector[number].quite = true;
        }
        else if(command == "COME"){
            cin >> number;
            if (number > 0) {
                for (int j = 0; j < number; j++) {
                    personVector.push_back(Person{ false, true });
                }
            }
            if (number < 0) {
                for (int k = number; k < 0; k++) {
                    personVector.pop_back();
                }
            }
        }
        else if(command == "WORRY_COUNT"){
            int counter = 0;
            for (const auto& person : personVector) {
                if (person.worry) {
                    counter++;
                }
            }

            cout << counter << endl;
        }
    }

    return 0;
}

