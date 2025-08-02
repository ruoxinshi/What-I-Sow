// im going to simulate a game hit with loops

#include <iostream> 
using namespace std;

int main() {

    // kailangan ng life
    // pag natamaan bawas life
    // limitado ang life pag naubos deds
    // loop runs if there are still hearts
    // semi dynamic heart display

    int hearts = 5;

     do {

        cout << "Heart remaining: " << hearts << endl;
        
        cout << "You see a bitch, slap it? ";
        
        char triggerSlap;

        cin >> triggerSlap;
        
        if (triggerSlap == 'y') {
            cout << "You slapped the bitch!" << endl;
            --hearts;
        } else if (triggerSlap == 'n') {
            cout << "You stood still, staring at the bitch!" << endl;
        } else {
            cout << "what you doing? slap that bitch!" << endl;
        }
        
        
    } while (hearts > 0);
    
    cout << "Heart remaining: " << hearts << endl;
    cout << "You slapped the bitch to death!" << endl;



    return 0;
}