#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

typedef int* ArrayPtr;

const int SIZE = 3;

int main() {
  //Create a 2D array by first creating an array of int pointers
  //and then creating an array of ints for each of the int pointers
  ArrayPtr *p1 = new ArrayPtr[5];
  //above without typedef => int **p1 = new int*[5];

  for (int i = 0; i < SIZE; i++) {
    p1[i] = new int[SIZE];
  }
  int position = 1;
  //initialize array values and display as grid
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      p1[i][j] = position;
      cout << p1[i][j] << "\t";
      position++;
    }
    cout << endl;
  }

  //delete 2d dynamic array
  for (int i=0; i < SIZE; i++) {
    delete [] p1[i];
  }
  delete [] p1;
  return 0;
}
