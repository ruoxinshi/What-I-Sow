
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // making a user input arranger both string and integers

    // vector array
    vector <string> theNames = {};
    vector <int> theNumbers = {};
    // actually forget the numbers just change the data type

    // bool condition for running this
    bool keepItRunning = true;



        do {
            
            cout << "Enter a name: ";

            string newName;

            getline (cin, newName);

            theNames.push_back(newName);


        // ask if you wanna keep registering.

            cout << "Keep registering names? ";

            char keepRegistering;

            cin >> keepRegistering;
            cin.ignore();

        // condition for continuing
            
            if (keepRegistering == 'y') {
                continue; 
            } else if (keepRegistering == 'n') {
                cout << "bye!" << endl;
                keepItRunning = false;
            }
            

        } while (keepItRunning);

        // different parameter syntax cuz were using vector
            sort (theNames.begin(), theNames.end());
        // display the names
            cout << "Here are all the names that were sorted!:" << endl;

            for (string showNames : theNames) {
                cout << showNames << endl;
            }


    return 0;
}