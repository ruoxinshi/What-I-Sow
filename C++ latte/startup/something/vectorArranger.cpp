
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// using functions to clean code

    void addName(vector<string>& theNames) {
    // get the names
        cout << "Enter a name: ";
        string newName;
        getline (cin, newName);
        theNames.push_back(newName);
    }

    bool askToContinue() {
    // ask if you wanna keep registering.
        char keepRegistering;
        cout << "Keep registering names? ";
        cin >> keepRegistering;
        cin.ignore();
    // condition for continuing
         if (keepRegistering == 'y') {
                return true; 
            } else if (keepRegistering == 'n') {
                cout << "bye!" << endl;
                return false;
            } else {
                cout << "th you typing in man??" << endl;
            }
    }

    void displaySortedNames(vector<string>& theNames) {
        // different parameter syntax cuz were using vector
            sort (theNames.begin(), theNames.end());
        // display the names
            cout << "Here are all the names that were sorted!:" << endl;
    
            for (string showNames : theNames) {
                cout << showNames << endl;
            }
    }

int main() {

    // making a user input arranger both string and integers

    // vector array
    vector <string> theNames = {};

    // vector <int> theNumbers = {};
    // actually forget the numbers just change the data type

    // bool condition for running this
    bool keepItRunning = true;

            while (keepItRunning){

                addName(theNames);

                // i just learned you can run a function even if its just an initialiazion wada wada
                // if you check the function return values are getting at keepItRunning variable wow
                keepItRunning = askToContinue();
            
            }
            
        displaySortedNames(theNames);
            



    return 0;
}