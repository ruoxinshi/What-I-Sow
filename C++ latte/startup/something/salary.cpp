// a little program that averages the salaries

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // set of salaries
    // need ko ma output lahat ng elements
    // sum ko sila
    // sum non i ddivide ko gamit yung getsize function
    // tas majik


    // array of salaries

    vector<float> theSalaries = {};

    bool keepTyping = true;

    float average;

    float sum = 0;
    

    do {

        cout << "Input each employee salary: ";
        
        float getSalary;

        cin >> getSalary;

        theSalaries.push_back(getSalary);

        cout << "continue? y/n: ";

        char stillContinue;

        cin >> stillContinue;

        if (stillContinue == 'y') {
            continue;
        } else if (stillContinue == 'n') {
            cout << "Tallying..." << endl;
            keepTyping = false;
        } else {
            cout << "What the fuck are you doing???" << endl;
            break;
        }

    } while (keepTyping);

    // getting the size of the salary array

    float getLength = theSalaries.size();

    // getting the total sum with for each loop
    
    for (float eachSalary : theSalaries) {
        sum += eachSalary;
    }

    // calculate the the rest of the computation with the given
    average = sum / getLength;

    cout << "Average is: " << average << endl;
    cout << "Total sum is: " << sum << endl;
    cout << "Total employee registered: " << getLength << endl;

    return 0;
}