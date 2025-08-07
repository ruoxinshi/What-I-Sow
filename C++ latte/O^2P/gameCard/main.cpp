// trying out oop starters

#include <iostream>
using namespace std;

    // class

    class gameCard {

        public:
            string title;
            string developer;
            int yearPublished; 
            
            // methods
            void displayGameCard(string title, string developer, int year) {
                cout << "game title: " << title << endl;
                cout << "game developer: " << developer << endl;
                cout << "game published: " << year << endl;
            }

        };

    class achievement {

        public: 

            string name;
            string description;
            int points;

            // constructor
            achievement (string n, string d, int p) {
                
                name = n;
                description = d;
                points = p;
            }

            void displayAchievement () {

                cout << "Achievement: " << name << endl;
                cout << "Description: " << description << endl;
                cout << "Points: " << points << endl;


            }

    };

int main () {

    // creating instance of theGame class

        gameCard game;

    // sample IO logic

        // cout << "enter the game title: ";
        
        // getline (cin, game.title);

        // cout << "enter the developer of the game: ";
        
        // getline (cin, game.developer);
        
        // cout << "enter the year the game was published: ";

        // cin >> game.yearPublished;
        // cin.ignore();

    // display the stuff

        // game.displayGameCard(game.title, game.developer, game.yearPublished);

    // trying out contructor

        achievement firstAch ("You only live once!", "Play the game and die once.", 1000);

        firstAch.displayAchievement();
        
    return 0;
}