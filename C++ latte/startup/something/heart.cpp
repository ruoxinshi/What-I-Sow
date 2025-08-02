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
        
        cout << "You see heisenberg, slap him? ";
        
        char triggerSlap;

        cin >> triggerSlap;
        
        if (triggerSlap == 'y') {
            cout << "You slapped heisenberg!" << endl;
            --hearts;
        } else if (triggerSlap == 'n') {
            cout << "You stood still, staring at heisenberg!" << endl;
        } else {
            cout << "what you doing? slap that stronzo!" << endl;
        }
        
        
    } while (hearts > 0);
    
    cout << "Heart remaining: " << hearts << endl;
    cout << "You slapped that stronzo to death!" << endl;



    return 0;
}