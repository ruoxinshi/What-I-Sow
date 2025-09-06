
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    
    // practicing and applying logics okay. smallest to biggest.

    int theNumbers[] = {12, 23, 43, 9, 10};
    string theBoys[] = {"QX", "Axelot", "Camero", "Oshiete", "Mainiggs"};
    int n = 5;

        // using algorith functon to sort
        // default sort. smallest to largest.
            sort (theNumbers, theNumbers + n);
        // arranges largest to smallest with greater<int>() function
            // sort(theNumbers, theNumbers + n, greater<int>());

        // testing sort for strings
            sort (theBoys, theBoys + n);

        // for loop to display

            // for (int i = 0; i < n; i++) { 
            //     cout << theNumbers[i] << endl;
            // }

        // testing in for each loop
            for (int showNumberArranged : theNumbers) {
                cout << showNumberArranged << endl;
            }
        // loop for string array
            for (string showTheBoys : theBoys) {
                cout << showTheBoys << endl;
            }

    return 0;
}