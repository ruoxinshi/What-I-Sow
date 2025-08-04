// trying out oop starters

#include <iostream>
using namespace std;

    // class

    class theGame {

        public:
            string title;
            string developer;
            int yearPublished; 

            // methods
            void displayGameCard(string getTitle, string getDeveloper, int getYear) {
                cout << "game title: " << getTitle << endl;
                cout << "game developer: " << getDeveloper << endl;
                cout << "game published: " << getYear << endl;
            }
    };

int main () {

    // creating instance of theGame class

    theGame game;

    // creating object from theGame classs

    cout << "enter the game title: ";
    
    getline (cin, game.title);

    cout << "enter the developer of the game: ";
    
    getline (cin, game.developer);
    
    cout << "enter the year the game was published: ";

    cin >> game.yearPublished;
    cin.ignore();

    // display the stuff
    game.displayGameCard(game.title, game.developer, game.yearPublished);

    return 0;
}