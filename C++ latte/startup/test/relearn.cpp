#include <iostream>

using namespace std;

int main () {

    cout << "Enter a name: ";

    string name;

    getline(cin, name);

    cout << "This is the name: " << name << endl;

    return 0;
}