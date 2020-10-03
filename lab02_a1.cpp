#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//declare function
int genRandom(int max);

int main () {
    int rounds = 100;
    
    
    for (int i = 9; i < rounds; i += 10) {
       
        int max = i;
        int guess;
        int rand = genRandom(max);
        int x = 1;
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
            
        }
        cout << "PLAY AGAIN! (Y/N) " << endl;
        cin >> play_again;

        switch (play_again){
        case 'N':
            break;
        
        default:
            break;
        } 
    
    }

    return 0;

}

//define function
int genRandom(int max) {
    srand(time(NULL));
    return (rand()%max + 1);
}