// trying out arrays and stuff

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // display array using for each loop

    // string theGirls[6] = {"Jesselle"};

    // cout << "\n";

    // theGirls[5] = "Glendain";

    // for (string showTheGirls : theGirls) {
    //     cout << showTheGirls << endl;
    // }

    // cout << "\n";

    // display array using normal for loop

    // string theBoys[3] = { "JD", "Yuki", "Ralph"};

    // for (int count = 0; count < 3; count++) {
    //     // cout << theBoys[count] << endl;

    //     cout << count << " = " << theBoys[count] << endl; 
    // }


    // basically, keep accepting input, put in a vector aray, then print the contents of the array within a loop

    bool keepTyping = true;

    vector <string> thePersons = {};

    do {

        cout << "Please enter a person's name: ";

        string newPerson;

        getline(cin, newPerson);

        thePersons.push_back(newPerson);

        cout << endl;

        cout << "Keep registering person's name? y/n: ";

        char keepRegistering;

        cin >> keepRegistering;
        cin.ignore();

        cout << endl;

        if (keepRegistering == 'y') {
            continue;
        } else if (keepRegistering == 'n') {
            cout << "bye!";
            keepTyping = false;
        }

    } while (keepTyping);

    cout << "\n\n" << "Current persons! \n" << endl;

    for (string showPersons : thePersons) {
        cout << showPersons << "\n\n";
    }

    return 0;
}