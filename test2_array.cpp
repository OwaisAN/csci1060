#include <iostream>
#include <string>

using namespace std;

const int size = 6;
char array[size][size];

int main() {

    for (int rows = 0; rows < size; rows++){
        if (rows % 2 == 0){
            for (int cols = 0; cols < size; cols++){
                array[rows][cols] = 'X';
            }     
        }        
    }
    for (int rows = 0; rows < size; rows++){
        if (rows % 2 == 1){
            for (int cols = 0; cols < size; cols++){
                array[rows][cols] = 'O';
            }     
        }        
    }
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            cout << array[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}

