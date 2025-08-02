// main file

#include <iostream>
using namespace std;

// void girl(string girlName = "Jael") {

//     cout << "this girl's name is: " << girlName << endl;
// }

// int getSum (int num1, int num2) {

//     return num2 + num1;

// }

// int doubleIt (int x) {

//     return x * 2;

// }

void displayArray (int theNumbers[5]) {
    for (int count = 0; count < 5; count++) {
        cout << theNumbers[count] << endl;
    }
}

// basically just inputs numbers within the limit with options to repeat

int main() {

    int fiveNumbers[5];

    int numbersEntered = 0;

    bool keepTrying = true;

    char keepContinue;

    // const int displayZero = 0;
    
    while (keepTrying) {

        do {

        
        cout << "enter a number [numbers entered: " << numbersEntered << " ]: ";
        cin >> fiveNumbers[numbersEntered];
        numbersEntered++;
        // something wrong with the display of entered numbers
        // probly also logic

        

        } while (numbersEntered <= 5);

        // reset the numbers entered to 0
        numbersEntered = 0;
        
        cout << "the numbers entered  are: " << endl;
        displayArray (fiveNumbers);

        cout << "continue? ";
        cin >> keepContinue;

        if (keepContinue == 'y') {
            continue;
        } else if (keepContinue == 'n') {
            cout << "thank you for trying! goodbye!" << endl;
            keepTrying = false;
        } else {
            cout << "only integeres stronzo!" << endl;
            continue;
        }
        

    }



    return 0;
}