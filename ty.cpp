#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int genRandom(int max); //random number generator

int main() {
    string we; 
    int x = 100;
    int y = genRandom(x);
    cout << y << endl;

    cin >> we;

    int z = genRandom(x);
    cout << z << endl; 
    

    return 0;
}



int genRandom(int max) {
    srand(time(NULL));
    return (rand()%max + 1);
}
