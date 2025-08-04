// trying out how to keep retrying

#include <iostream>
using namespace std;

int main() {

    bool keepTrying = true;

    int numberOfTimes = 1;

    while (keepTrying) {

        do {
            cout << "the number of times this text showed up: [" << numberOfTimes << "]" << endl;
            numberOfTimes++;
        }
        while (numberOfTimes < 5);

        // resets number to zero
        numberOfTimes = 0;

        cout << "continue on? [y/n] ";

        char triggerContinue;

        cin >> triggerContinue;

        if (triggerContinue == 'y') {
            continue;
        } else if (triggerContinue == 'n') {
            cout << "okay bye!" << endl;
            keepTrying = false;
        } else {
            cout << "what u doing?" << endl;
        }

    }

    return 0;
}