#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//declare function
int genRandom(int max); //random number generator
int game(int max, int round); // function that contains the game


int main () {
    cout <<"------------------------------" << endl;
    cout <<"Welcome to Battleship Lite !" << endl;
    cout <<"------------------------------" << endl;
    cout << " " << endl;
    game(9,1);

}

//define function
int genRandom(int max) {
    srand(time(NULL));
    return (rand()%max + 1);
}

int game(int max, int round) {
        cout <<"ROUND " << round << endl;
        int user_guess;
        int x = 0;
        char play_again = 'Y';

        //battleship initialization
        int user_battleship;
        cout << "Choose the location of your battleship [0," << max << "]: ";
        cin >> user_battleship;
        

        int cp_battleship = genRandom(max);
        cout << "The computer has chosen its location [0," << max << "]: "  << endl;

        cout << "Ready to begin!" << endl;
        cout << " " << endl;
        

        while (x < 5){

            // user guess            
            cout << "Guess a location of the battleship [0," << max << "]: "; 
            cin >> user_guess;
            

            if (cp_battleship != user_guess) {
                cout << "MISSED!" << endl;
            }
            else if (cp_battleship == user_guess) {
                x = 5;
                cout << "HIT!" << endl;
            } 
            cout << " " << endl;

            //cp guess
            cout << "Computer's guess [0," << max << "]: ";
            int cp_guess = genRandom(max);
            cout << cp_guess << endl;

            
            if (user_battleship != cp_guess) {
                cout << "MISSED!" << endl;
            }
            else if (user_battleship == cp_guess) {
                x = 5;
                cout << "HIT!" << endl;
            } 
            cout << " " << endl;
        }
        //after HIT
        cout << "PLAY AGAIN! (Y/N) " << endl;
        cin >> play_again;

        switch (play_again){
        case 'N':
            break;
        
        case 'Y':
            game(max + 10, round + 1);
            break;
        default:
            break;
        } 
    return 0;
}