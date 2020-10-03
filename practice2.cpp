#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//declare function
int genRandom(int max); //random number generator
int game(int max, int round); // function that contains the game


int main () {
    game(9,1);

}

//define function
int genRandom(int max) {
    srand(time(NULL));
    return (rand()%max + 1);
}

int game(int max, int round) {
        cout <<"ROUND " << round << endl;
        int guess;
        int rand = genRandom(max);
        int x = 0;
        char play_again = 'Y';
        while (x < 5){
            cout << "Guess a location of the battleship [0," << max << "]: " << endl;
            
            cin >> guess;
            if (rand != guess) {
                x += 1;
                cout << "MISS!" << endl;
            }
            else {
                x = 5;
                cout << "HIT!" << endl;
            } 
            cout << " " << endl;
        }
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